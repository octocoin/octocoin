// Copyright (c) 2014-8888 The OctoCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "octocoinunits.h"

#include <QStringList>

OctoCoinUnits::OctoCoinUnits(QObject *parent):
        QAbstractListModel(parent),
        unitlist(availableUnits())
{
}

QList<OctoCoinUnits::Unit> OctoCoinUnits::availableUnits()
{
    QList<OctoCoinUnits::Unit> unitlist;
    unitlist.append(l888);
    unitlist.append(m888);
    unitlist.append(u888);
    return unitlist;
}

bool OctoCoinUnits::valid(int unit)
{
    switch(unit)
    {
    case l888:
    case m888:
    case u888:
        return true;
    default:
        return false;
    }
}

QString OctoCoinUnits::name(int unit)
{
    switch(unit)
    {
    case l888: return QString("888");
    case m888: return QString("m888");
    case u888: return QString::fromUtf8("μ888");
    default: return QString("???");
    }
}

QString OctoCoinUnits::description(int unit)
{
    switch(unit)
    {
    case l888: return QString("OctoCoins");
    case m888: return QString("Milli-OctoCoins (1 / 1,000)");
    case u888: return QString("Micro-OctoCoins (1 / 1,000,000)");
    default: return QString("???");
    }
}

qint64 OctoCoinUnits::factor(int unit)
{
    switch(unit)
    {
    case l888:  return 100000000;
    case m888: return 100000;
    case u888: return 100;
    default:   return 100000000;
    }
}

qint64 OctoCoinUnits::maxAmount(int unit)
{
    switch(unit)
    {
    case l888:  return Q_INT64_C(88888888);
    case m888: return Q_INT64_C(88888888000);
    case u888: return Q_INT64_C(88888888000000);
    default:   return 0;
    }
}

int OctoCoinUnits::amountDigits(int unit)
{
    switch(unit)
    {
    case l888: return 8; // 88,888,888 (# digits, without commas)
    case m888: return 11; // 88,888,888,000
    case u888: return 14; // 88,888,888,000,000
    default: return 0;
    }
}

int OctoCoinUnits::decimals(int unit)
{
    switch(unit)
    {
    case l888: return 8;
    case m888: return 5;
    case u888: return 2;
    default: return 0;
    }
}

QString OctoCoinUnits::format(int unit, qint64 n, bool fPlus)
{
    // Note: not using straight sprintf here because we do NOT want
    // localized number formatting.
    if(!valid(unit))
        return QString(); // Refuse to format invalid unit
    qint64 coin = factor(unit);
    int num_decimals = decimals(unit);
    qint64 n_abs = (n > 0 ? n : -n);
    qint64 quotient = n_abs / coin;
    qint64 remainder = n_abs % coin;
    QString quotient_str = QString::number(quotient);
    QString remainder_str = QString::number(remainder).rightJustified(num_decimals, '0');

    // Right-trim excess zeros after the decimal point
    int nTrim = 0;
    for (int i = remainder_str.size()-1; i>=2 && (remainder_str.at(i) == '0'); --i)
        ++nTrim;
    remainder_str.chop(nTrim);

    if (n < 0)
        quotient_str.insert(0, '-');
    else if (fPlus && n > 0)
        quotient_str.insert(0, '+');
    return quotient_str + QString(".") + remainder_str;
}

QString OctoCoinUnits::formatWithUnit(int unit, qint64 amount, bool plussign)
{
    return format(unit, amount, plussign) + QString(" ") + name(unit);
}

bool OctoCoinUnits::parse(int unit, const QString &value, qint64 *val_out)
{
    if(!valid(unit) || value.isEmpty())
        return false; // Refuse to parse invalid unit or empty string
    int num_decimals = decimals(unit);
    QStringList parts = value.split(".");

    if(parts.size() > 2)
    {
        return false; // More than one dot
    }
    QString whole = parts[0];
    QString decimals;

    if(parts.size() > 1)
    {
        decimals = parts[1];
    }
    if(decimals.size() > num_decimals)
    {
        return false; // Exceeds max precision
    }
    bool ok = false;
    QString str = whole + decimals.leftJustified(num_decimals, '0');

    if(str.size() > 18)
    {
        return false; // Longer numbers will exceed 63 bits
    }
    qint64 retvalue = str.toLongLong(&ok);
    if(val_out)
    {
        *val_out = retvalue;
    }
    return ok;
}

int OctoCoinUnits::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return unitlist.size();
}

QVariant OctoCoinUnits::data(const QModelIndex &index, int role) const
{
    int row = index.row();
    if(row >= 0 && row < unitlist.size())
    {
        Unit unit = unitlist.at(row);
        switch(role)
        {
        case Qt::EditRole:
        case Qt::DisplayRole:
            return QVariant(name(unit));
        case Qt::ToolTipRole:
            return QVariant(description(unit));
        case UnitRole:
            return QVariant(static_cast<int>(unit));
        }
    }
    return QVariant();
}
