//Name: Grant Clark
//File: Window.h

#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

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
        setStyleSheet("QLabel {font-family: Arial}");
    }
    
private:
};
    
#endif
