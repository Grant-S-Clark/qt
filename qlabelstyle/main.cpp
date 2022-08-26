//Name: Grant Clark
//File: main.cpp

#include <QApplication>
#include "Window.h"

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);

    
    Window window(400, 200);
    window.show();
    
    return app.exec();
}
