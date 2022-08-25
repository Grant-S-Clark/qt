//Name: Grant Clark
//File: main.cpp

#include <QApplication>
#include <QPushButton>
#include "Window.h"

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);

    Window window(250, 250);
    window.show();
    
    return app.exec();
}
