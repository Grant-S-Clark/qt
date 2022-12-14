//Name: Grant Clark
//File: main.cpp

#include <QApplication>
#include <QPushButton>

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);
    QPushButton button("button label");
    button.setWindowTitle("Qt");
    button.resize(125, 30);

    QFont font("courier");
    button.setFont(font);

    button.show();
    return app.exec();
}
