#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "LongInt.h"

/*
  Each function inside of the Calculator namespace
  functions as follows:
     1: Perform operation and store resulting number
        into num0 and its corresponding decimal
        position into decimal0.
     2: Sets num1 = 0 and decimal1 = -1 to prepare
        for another computation.
*/
namespace Calculator
{
    void match_decimal_pos(LongInt & num0, int & decimal0,
                           LongInt & num1, int & decimal1);

    void remove_redundant_zeros(LongInt & num, int & decimal);
    
    void add(LongInt & num0, int & decimal0,
             LongInt & num1, int & decimal1);

    void subtract(LongInt & num0, int & decimal0,
                  LongInt & num1, int & decimal1);

    void multiply(LongInt & num0, int & decimal0,
                  LongInt & num1, int & decimal1);

    void divide(LongInt & num0, int & decimal0,
                LongInt & num1, int & decimal1);
}

#endif
