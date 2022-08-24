//Name: Grant Clark
//File: main.cpp

#include <QApplication>
#include <QLabel>

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);
    QLabel hello("hello world");
    hello.setAlignment(Qt::AlignLeft | Qt::AlignTop); 
    hello.setWindowTitle("Qt");
    hello.resize(400, 400);
    hello.show();
    return app.exec();
}
