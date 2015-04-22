#ifndef nodehatCONFIGDIALOG_H
#define nodehatCONFIGDIALOG_H

#include <QDialog>

namespace Ui {
    class nodehatConfigDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class nodehatConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit nodehatConfigDialog(QWidget *parent = 0, QString nodeAddress = "123.456.789.123:9999", QString privkey="MASTERNODEPRIVKEY");
    ~nodehatConfigDialog();

private:
    Ui::nodehatConfigDialog *ui;
};

#endif // nodehatCONFIGDIALOG_H
