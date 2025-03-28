#ifndef CALCULUS_H
#define CALCULUS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculus;
}
QT_END_NAMESPACE

class Calculus : public QMainWindow
{
    Q_OBJECT

public:
    Calculus(QWidget *parent = nullptr);
    ~Calculus();
    void setLabelString(char sign);
    void displayResult(QString labelstring);
    void getNumberFromString();
    void getNumberFromString(int index);

private slots:
    void on_one_clicked();

    void on_zero_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_sum_clicked();

    void on_difference_clicked();

    void on_multicplication_clicked();

    void on_division_clicked();

    void on_delete_2_clicked();

    void on_equality_clicked();

    void on_clear_clicked();

    void on_point_clicked();

private:
    void calculationsResult();
    int getNumberFromStringFloat(int index);
    Ui::Calculus *ui;
    QString labelstring_ ="";
    char sign_;
    float number1_, number2_, result_;
    bool flag_;
    int signindex_ = 0;
};

class Calculation
{
    friend Calculus;
public:
    void setNum1(float num1);
    void setNum2(float num2);
    void operation();

private:

};

#endif // CALCULUS_H
