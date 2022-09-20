#include "Calculator.h"

namespace Calculator
{
    void match_decimal_pos(LongInt & num0, int & decimal0,
                           LongInt & num1, int & decimal1)
    {
        if (decimal0 == -1)
            decimal0 = 0;
        if (decimal1 == -1)
            decimal1 = 0;
        
        while (decimal0 > decimal1)
        {
            num1 *= 10;
            ++decimal1;
        }

        while (decimal1 > decimal0)
        {
            num0 *= 10;
            ++decimal0;
        }

        return;
    }

    void remove_redundant_zeros(LongInt & num, int & decimal)
    {
        int i = num.size() - 1;
        while (true)
        {
            if (decimal < 1)
            {
                decimal = -1;
                break;
            }

            if (num[i] == 0)
            {
                --decimal;
                num /= 10;
            }

            else
                break;
            
            --i;
        }
        
        return;
    }

    void add(LongInt & num0, int & decimal0,
             LongInt & num1, int & decimal1)
    {
        match_decimal_pos(num0, decimal0, num1, decimal1);

        num0 += num1;

        remove_redundant_zeros(num0, decimal0);

        num1 = 0;
        decimal1 = -1;
        
        return;
    }

    void subtract(LongInt & num0, int & decimal0,
                  LongInt & num1, int & decimal1)
    {
        match_decimal_pos(num0, decimal0, num1, decimal1);

        num0 -= num1;

        remove_redundant_zeros(num0, decimal0);

        num1 = 0;
        decimal1 = -1;
        
        return;
    }

    void multiply(LongInt & num0, int & decimal0,
                  LongInt & num1, int & decimal1)
    {
        num0 *= num1;

        if (decimal0 == -1)
            decimal0 = 0;
        if (decimal1 == -1)
            decimal1 = 0;

        decimal0 += decimal1;

        remove_redundant_zeros(num0, decimal0);

        num1 = 0;
        decimal1 = -1;
        
        return;
    }

    void divide(LongInt & num0, int & decimal0,
                LongInt & num1, int & decimal1)
    {
        num0.multeq_tenpower(5); //5 decimal places
        
        num0 /= num1;

        if (decimal0 == -1)
            decimal0 = 0;
        if (decimal1 == -1)
            decimal1 = 0;

        decimal0 += 5;
        decimal0 -= decimal1;

        remove_redundant_zeros(num0, decimal0);

        num1 = 0;
        decimal1 = -1;
        
        return;
    }
    
}
