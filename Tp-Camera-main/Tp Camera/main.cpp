#include "TpCamera.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TpCamera w;
    w.show();
    return a.exec();
}
