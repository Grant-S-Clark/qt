//Name: Grant Clark
//File: Window.h

#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QLabel>

class Window : public QWidget
{
public:
    Window(int size_x, int size_y,
           QString title = "Qt",
           QWidget * parent = nullptr) :
        QWidget(parent)
    {
        setFixedSize(size_x, size_y);
        setWindowTitle(title);

        label0 = new QLabel("hello world", this);
        label0->setGeometry(10, 10, 170, 80);

        label1 = new QLabel("hello world", this);
        label1->setGeometry(200, 10, 170, 80);
        label1->setStyleSheet("background: red;"
                              "font-family: Courier");
        
        label2 = new QLabel("hello world", this);
        label2->setGeometry(10, 100, 170, 80);
        label2->setStyleSheet("background-color: rgb(0,200,0);"
                              "color: rgb(255,0,0);"
                              "text-align: left;");
        
        label3 = new QLabel("hello world", this);
        label3->setGeometry(200, 100, 170, 80);
        label3->setStyleSheet("background-color: rgb(0,200,0);"
                              "font: bold;"
                              "font-size: 40px;"
                              "border: 10px solid blue;"
                              "border-radius: 20px;"
                              "qproperty-alignment: AlignCenter;");
    }
    
private:
    QLabel * label0, * label1,
           * label2, * label3;
};
    
#endif
