#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H
#include <QOpenGLWidget>
#include <QOpenGLFunctions>

#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QQuaternion>
//#include <gl/GLU.h>
#include <QDebug>
class MyGLWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    MyGLWidget(QWidget *parent = 0);
    ~MyGLWidget();
protected:
    void initializeGL();
    void paintGL();

};
#endif // MYGLWIDGET_H
