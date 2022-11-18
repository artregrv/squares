#include <QApplication>

#include "application_window.h"
#include "image_processor.h"

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    ApplicationWindow window;
    window.setWindowTitle(QObject::tr("Squres"));
    window.resize(1280, 720);
    window.show();

    return application.exec();
}
