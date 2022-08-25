//Name: Grant Clark
//File: Window.h

#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>

QString get_str(const int i)
{
    switch (i)
    {
        case 0: return "7";
        case 1: return "8";
        case 2: return "9";
        case 3: return "/";
        case 4: return "DEL";
        case 5: return "4";
        case 6: return "5";
        case 7: return "6";
        case 8: return "*";
        case 9: return "AC";
        case 10: return "1";
        case 11: return "2";
        case 12: return "3";
        case 13: return "+";
        case 14: return "^";
        case 15: return "0";
        case 16: return ".";
        case 17: return "=";
        case 18: return "-";
        case 19: return "%";
        default: return " ";
    }
}

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

        QFont font("Arial");
        font.setPointSize(12);
        
        buttons_ = new QPushButton*[20];
        for (int i = 0; i < 20; ++i)
        {
            buttons_[i] = new QPushButton(get_str(i), this);
            buttons_[i]->setGeometry(10 + 47 * (i % 5),
                                     55 + 47 * (i / 5),
                                     40, 40);
            buttons_[i]->setFont(font);
        }
        
        label_ = new QLabel("hello world", this);
        label_->setAlignment(Qt::AlignRight);
        label_->setGeometry(10, 20, 230, 20);
        label_->setFont(font);
    }

    ~Window()
    {
        delete[] buttons_;
    }
    
private:
    QPushButton ** buttons_;
    /*
      index | value
          0 = 7
          1 = 8
          2 = 9
          3 = /
          4 = DEL
          5 = 4
          6 = 5
          7 = 6
          8 = *
          9 = AC
         10 = 1
         11 = 2
         12 = 3
         13 = +
         14 = ^
         15 = 0
         16 = .
         17 = =
         18 = -
         19 = %
    */
    
    QLabel * label_;
};
    
#endif
