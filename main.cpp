// main.cpp

#include <QtGlobal>
#include <QString>
#include <QCoreApplication>

/////////////////////////
#include <QtCore5Compat> /// TODO: append this header for old Qt5 code.
/////////////////////////

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString qstr("Hello, Qt5! int Qt6.");

    // Old Qt5 code.
    QStringRef sref( &qstr );
    qDebug() << sref;

    return 0; // return a.exec();
}
