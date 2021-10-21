#include <QtCore/QCoreApplication>
#include "dmx1.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
	DMX * obj = new DMX();
	obj->SendTrame();
    return a.exec();
}