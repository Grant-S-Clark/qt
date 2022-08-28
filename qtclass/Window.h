//Name: Grant Clark
//File: Window.h

#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <sstream>
#include <string>
#include <cmath>

class Window : public QWidget
{
    Q_OBJECT
public:
    Window(int size_x, int size_y,
          QString title = "Qt",
           QWidget * parent = nullptr) :
        QWidget(parent), num(0), digits(1)
    {
        setFixedSize(size_x, size_y);
        setWindowTitle(title);

        QFont font("Arial");
        font.setPointSize(12);
        
        buttons_ = new QPushButton*[20];
        for (int i = 0; i < 20; ++i)
        {
            buttons_[i] = new QPushButton(get_qstr(i), this);
            buttons_[i]->setGeometry(10 + 47 * (i % 5),
                                     55 + 47 * (i / 5),
                                     40, 40);
            buttons_[i]->setFont(font);
        }
        
        label_ = new QLabel("hello world", this);
        label_->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
        label_->setGeometry(10, 10, 230, 40);
        label_->setFont(font);
        label_->setStyleSheet("border: 2px solid black;");

        connect(buttons_[0], SIGNAL(clicked()),
                this, SLOT(press_0()));
        connect(buttons_[1], SIGNAL(clicked()),
                this, SLOT(press_1()));
        connect(buttons_[2], SIGNAL(clicked()),
                this, SLOT(press_2()));
        connect(buttons_[3], SIGNAL(clicked()),
                this, SLOT(press_3()));
        connect(buttons_[4], SIGNAL(clicked()),
                this, SLOT(press_4()));
        connect(buttons_[5], SIGNAL(clicked()),
                this, SLOT(press_5()));
        connect(buttons_[6], SIGNAL(clicked()),
                this, SLOT(press_6()));
        connect(buttons_[7], SIGNAL(clicked()),
                this, SLOT(press_7()));
        connect(buttons_[8], SIGNAL(clicked()),
                this, SLOT(press_8()));
        connect(buttons_[9], SIGNAL(clicked()),
                this, SLOT(press_9()));
        connect(buttons_[10], SIGNAL(clicked()),
                this, SLOT(press_10()));
        connect(buttons_[11], SIGNAL(clicked()),
                this, SLOT(press_11()));
        connect(buttons_[12], SIGNAL(clicked()),
                this, SLOT(press_12()));
        connect(buttons_[13], SIGNAL(clicked()),
                this, SLOT(press_13()));
        connect(buttons_[14], SIGNAL(clicked()),
                this, SLOT(press_14()));
        connect(buttons_[15], SIGNAL(clicked()),
                this, SLOT(press_15()));
        connect(buttons_[16], SIGNAL(clicked()),
                this, SLOT(press_16()));
        connect(buttons_[17], SIGNAL(clicked()),
                this, SLOT(press_17()));
        connect(buttons_[18], SIGNAL(clicked()),
                this, SLOT(press_18()));
        connect(buttons_[19], SIGNAL(clicked()),
                this, SLOT(press_19()));

        update_text();
    }

    ~Window()
    {
        delete[] buttons_;
    }

    QString get_qstr(const int i)
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

    void update_text()
    {
        std::ostringstream oss;
        oss << num;
        label_->setText(oss.str().c_str());

        return;
    }

private slots:
    // 7
    void press_0()
    {
        num *= 10;
        num += 7;

        ++digits;
        
        update_text();
        
        return;
    }

    // 8
    void press_1()
    {
        
        
        return;
    }

    // 9
    void press_2()
    {
        
        
        return;
    }

    // /
    void press_3()
    {
        
        
        return;
    }

    // DEL
    void press_4()
    {
        num = ((int)num / 10) + (num - (int)num);
        --digits;

        update_text();

        return;
    }

    // 4
    void press_5()
    {

        
        return;
    }


    // 5
    void press_6()
    {

        
        return;
    }


    // 6
    void press_7()
    {

        
        return;
    }

    // *
    void press_8()
    {

        
        return;
    }

    // AC
    void press_9()
    {

        
        return;
    }

    // 1
    void press_10()
    {

        
        return;
    }

    // 2
    void press_11()
    {

        
        return;
    }

    // 3
    void press_12()
    {

        
        return;
    }

    // +
    void press_13()
    {

        
        return;
    }

    // ^
    void press_14()
    {

        
        return;
    }

    // 0
    void press_15()
    {

        
        return;
    }

    // .
    void press_16()
    {

        
        return;
    }

    // =
    void press_17()
    {

        
        return;
    }

    // -
    void press_18()
    {

        
        return;
    }

    // %
    void press_19()
    {

        
        return;
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

    long double num;
    int digits;
};
    
#endif
