#ifndef THEMDOCGIA_DIALOG_H
#define THEMDOCGIA_DIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <string>
#include <QLineEdit>

namespace Ui {
class themDocGia_Dialog;
}

class themDocGia_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit themDocGia_Dialog(QWidget *parent = nullptr);
    ~themDocGia_Dialog();
    QString getHoVaTen();
    QString getPhai();
    void xuLyChuoi(const QString &s, QLineEdit* lineEdit);

private slots:

    void on_ok_pushButton_clicked();

    void on_cancel_pushButton_clicked();

    void on_hoVaTen_lineEdit_textChanged(const QString &arg1);

private:
    Ui::themDocGia_Dialog *ui;
};

#endif // THEMDOCGIA_DIALOG_H
