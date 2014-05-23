// Copyright (c) 2014-8888 The OctoCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef UTILITYDIALOG_H
#define UTILITYDIALOG_H

#include <QDialog>
#include <QObject>

class OctoCoinGUI;
class ClientModel;

namespace Ui {
    class AboutDialog;
    class HelpMessageDialog;
}

/** "About" dialog box */
class AboutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AboutDialog(QWidget *parent);
    ~AboutDialog();

    void setModel(ClientModel *model);

private:
    Ui::AboutDialog *ui;

private slots:
    void on_buttonBox_accepted();
};

/** "Help message" dialog box */
class HelpMessageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HelpMessageDialog(QWidget *parent);
    ~HelpMessageDialog();

    void printToConsole();
    void showOrPrint();

private:
    Ui::HelpMessageDialog *ui;
    QString header;
    QString coreOptions;
    QString uiOptions;

private slots:
    void on_okButton_accepted();
};


/** "Shutdown" window */
class ShutdownWindow : public QObject
{
    Q_OBJECT

public:
    static void showShutdownWindow(OctoCoinGUI *window);
};

#endif // UTILITYDIALOG_H
