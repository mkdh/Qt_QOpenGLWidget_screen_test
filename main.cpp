#include "myglwidget.h"
#include <QApplication>
#include <QSurfaceFormat>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("My First openGL Widget");

    QSurfaceFormat format;
    format.setDepthBufferSize(24);
    format.setStencilBufferSize(8);
    format.setVersion(3, 2);
    format.setProfile(QSurfaceFormat::CoreProfile);
    QSurfaceFormat::setDefaultFormat(format);
    MyGLWidget w;
    w.show();
    return a.exec();
}
