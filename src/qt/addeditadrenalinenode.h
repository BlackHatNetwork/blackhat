#ifndef ADDEDITnodehat_H
#define ADDEDITnodehat_H

#include <QDialog>

namespace Ui {
class AddEditnodehat;
}


class AddEditnodehat : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditnodehat(QWidget *parent = 0);
    ~AddEditnodehat();

protected:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

signals:

private:
    Ui::AddEditnodehat *ui;
};

#endif // ADDEDITnodehat_H
