//Name: Grant Clark
//File: main.cpp

#include <QApplication>
#include <QPushButton>

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setFixedSize(400, 200);
    window.setWindowTitle("Qt");

    QPushButton * pbutton = new QPushButton("hello world", &window);
    pbutton->setGeometry(120, 80, 160, 40);

    window.show();
    
    return app.exec();
}
