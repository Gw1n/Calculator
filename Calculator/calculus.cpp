#include "calculus.h"
#include "ui_calculus.h"

Calculus::Calculus(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculus)
{
    ui->setupUi(this);
}

Calculus::~Calculus()
{
    delete ui;
}

/*void Calculation::setNum1(float num1)
{
    this -> number1_ = num1;
}

void Calculation::setNum2(float num2)
{
    this -> number2_ = num2;
}*/

void Calculus::setLabelString(char sign)
{
    this -> labelstring_ += sign;
}

void Calculus::displayResult(QString labelstring)
{

    labelstring_ += labelstring;
    ui -> label -> setText(labelstring_);
}

void Calculus::on_zero_clicked()
{
    displayResult("0");
}

void Calculus::on_one_clicked()
{
    displayResult("1");
}

void Calculus::on_two_clicked()
{
    displayResult("2");
}

void Calculus::on_three_clicked()
{
    displayResult("3");
}

void Calculus::on_four_clicked()
{
    displayResult("4");
}

void Calculus::on_five_clicked()
{
    displayResult("5");
}

void Calculus::on_six_clicked()
{
    displayResult("6");
}

void Calculus::on_seven_clicked()
{
    displayResult("7");
}

void Calculus::on_eight_clicked()
{
    displayResult("8");
}

void Calculus::on_nine_clicked()
{
    displayResult("9");
}

void Calculus::on_sum_clicked()
{
    displayResult("+");
}

void Calculus::on_difference_clicked()
{
    displayResult("-");
}

void Calculus::on_multicplication_clicked()
{
    displayResult("*");
}

void Calculus::on_division_clicked()
{
    displayResult("/");
}


void Calculus::on_delete_2_clicked()
{
    labelstring_.chop(1);
    ui -> label -> setText(labelstring_);
}

void Calculus::on_clear_clicked()
{
    ui -> label -> setText("");
}


void Calculus::on_point_clicked()
{
    displayResult(".");
}

void Calculus::getNumberFromString()
{
    number1_ = 0;
    int decimalcount = 1;
    for (int i = 0; i < labelstring_.size(); i++)
    {
        flag_ = false;
        if (labelstring_[i] == "1")
        {
            number1_ = number1_*10 + 1;
        }
        else if (labelstring_[i] == "2")
        {
            number1_ = number1_*10 + 2;
        }
        else if (labelstring_[i] == "3")
        {
            number1_ = number1_*10 + 3;
        }
        else if (labelstring_[i] == "4")
        {
            number1_ = number1_*10 + 4;
        }
        else if (labelstring_[i] == "5")
        {
            number1_ = number1_*10 + 5;
        }
        else if (labelstring_[i] == "6")
        {
            number1_ = number1_*10 + 6;
        }
        else if (labelstring_[i] == "7")
        {
            number1_ = number1_*10 + 7;
        }
        else if (labelstring_[i] == "8")
        {
            number1_ = number1_*10 + 8;
        }
        else if (labelstring_[i] == "9")
        {
            number1_ = number1_*10 + 9;
        }
        else if (labelstring_[i] == "0")
        {
            number1_ = number1_*10 + 0;
        }
        else if (labelstring_[i] == ".")
        {
            decimalcount = getNumberFromStringFloat(i);
        }
        else if ((labelstring_[i] == "+") || (labelstring_[i] == "-") || (labelstring_[i] == "/") || (labelstring_[i] == "*"))
        {
            signindex_ = i;
            result_ = number1_/decimalcount;
            i = labelstring_.size();
        }
    }
    result_ = number1_/decimalcount;
}

void Calculus::getNumberFromString(int index)
{
    number2_ = 0;
    int decimalcount = 1;
    bool flag = false;
    for (int i = index+1; i < labelstring_.size(); i++)
    {
        flag_ = false;
        if (labelstring_[i] == "1")
        {
            number2_ = number2_*10 + 1;
        }
        else if (labelstring_[i] == "2")
        {
            number2_ = number2_*10 + 2;
        }
        else if (labelstring_[i] == "3")
        {
            number2_ = number2_*10 + 3;
        }
        else if (labelstring_[i] == "4")
        {
            number2_ = number2_*10 + 4;
        }
        else if (labelstring_[i] == "5")
        {
            number2_ = number2_*10 + 5;
        }
        else if (labelstring_[i] == "6")
        {
            number2_ = number2_*10 + 6;
        }
        else if (labelstring_[i] == "7")
        {
            number2_ = number2_*10 + 7;
        }
        else if (labelstring_[i] == "8")
        {
            number2_ = number2_*10 + 8;
        }
        else if (labelstring_[i] == "9")
        {
            number2_ = number2_*10 + 9;
        }
        else if (labelstring_[i] == "0")
        {
            number2_ = number2_*10 + 0;
        }
        else if (labelstring_[i] == ".")
        {
            decimalcount = getNumberFromStringFloat(i);
        }
        else if ((labelstring_[i] == "+") || (labelstring_[i] == "-") || (labelstring_[i] == "/") || (labelstring_[i] == "*"))
        {
            number2_ /= decimalcount;
            calculationsResult();
            signindex_ = i;
            getNumberFromString(signindex_);
            i = labelstring_.size();
            flag = true;
        }
    }
    if (flag == false)
    {
        number2_ /= decimalcount;
        calculationsResult();
    }
}

int Calculus::getNumberFromStringFloat(int index)
{
    int decimalcount = 1;
    for (int i = index+1; i < labelstring_.size(); i++)
    {
        if ((labelstring_[i] != '+') && (labelstring_[i] != '-') && (labelstring_[i] != '/') && (labelstring_[i] != '*') && (labelstring_[i] != '.'))
        {
            decimalcount *= 10;
            qDebug() << decimalcount;
        }
        else
        {
            i = labelstring_.size();
            return decimalcount;
        }
    }
    return decimalcount;
}

void Calculus::calculationsResult()
{
    switch (labelstring_[signindex_].toLatin1())
    {
    case '+':
        result_ += number2_;
        break;
    case '-':
        result_ -= number2_;
        break;
    case '*':
        result_ *= number2_;
        break;
    case '/':
        result_ /= number2_;
        break;
    }
}

void Calculus::on_equality_clicked()
{
    getNumberFromString();
    getNumberFromString(signindex_);
    if (result_ == (int)result_)
    {
        ui -> label -> setText(QString::fromStdString(std::to_string((int)result_)));
    }
    else
    {
        ui -> label -> setText(QString::fromStdString(std::to_string(result_)));
    }
}
