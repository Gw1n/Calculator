#include "calculus.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculus w;
    w.show();
    return a.exec();
}
