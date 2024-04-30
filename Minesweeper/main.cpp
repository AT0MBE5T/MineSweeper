#include "mainarea.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainArea w;
    w.show();
    return a.exec();
}
