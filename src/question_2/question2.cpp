#include "question2.h"

bool test_config()
{
    return true;
}

int binary_to_decimal(string binary_num)
{
    int decimal_num = 0;
    int binary_converter = 1;

    for (int i = 7; i >= 0; i--)
    {
        if (binary_num[i] == '1')
        {
            decimal_num += binary_converter;
        }
        binary_converter *= 2;
    }

    return decimal_num;
}