#include "TaskManagerGUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    TaskManagerGUI window;
    window.show();
    return app.exec();
}
