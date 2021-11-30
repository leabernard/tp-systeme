#include "sendToDatabase.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sendToDatabase w;
    w.show();
    return a.exec();
}
