#include "myglwidget.h"
MyGLWidget::MyGLWidget(QWidget *parent)
    : QOpenGLWidget(parent)
{
}
MyGLWidget::~MyGLWidget()
{
}
void MyGLWidget::initializeGL()
{
    //http://www.voidcn.com/blog/fu851523125/article/p-5780291.html
    initializeOpenGLFunctions();
    glClearColor(0, 255, 0, 0);
//http://www.falloutsoftware.com/tutorials/gl/gl2p5.htm
//    // this code will draw a point located at [100, 100, -25]
//    glBegin(GL_POINTS);
//    glVertex3f(100.0f, 100.0f, -25.0f);
//    glEnd( );

//    // next code will draw a line at starting and ending coordinates specified by glVertex3f
//    glBegin(GL_LINES);
//    glVertex3f(0.0f, 0.0f, 0.0f); // origin of the line
//    glVertex3f(2000.0f, 2000.0f, 5.0f); // ending point of the line
//    glEnd( );

//    // the following code draws a triangle
//    glBegin(GL_TRIANGLES);
//    glVertex3f(100.0f, 100.0f, 0.0f);
//    glVertex3f(150.0f, 100.0f, 0.0f);
//    glVertex3f(125.0f, 50.0f, 0.0f);
//    glEnd( );

//    // this code will draw two lines "at a time" to save
//    // the time it takes to call glBegin and glEnd.

//    glBegin(GL_LINES);
//    glVertex3f(100.0f, 100.0f, 0.0f); // origin of the FIRST line
//    glVertex3f(200.0f, 140.0f, 5.0f); // ending point of the FIRST line
//    glVertex3f(120.0f, 170.0f, 10.0f); // origin of the SECOND line
//    glVertex3f(240.0f, 120.0f, 5.0f); // ending point of the SECOND line
//    glEnd( );


}
