// Copyright (c) 2014-8888 The OctoCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef OCTOCOINADDRESSVALIDATOR_H
#define OCTOCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class OctoCoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit OctoCoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** OctoCoin address widget validator, checks for a valid octocoin address.
 */
class OctoCoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit OctoCoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // OCTOCOINADDRESSVALIDATOR_H
