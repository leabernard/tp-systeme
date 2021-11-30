#include "TPSystemeCloche.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TPSystemeCloche w;
    w.show();
    return a.exec();
}
