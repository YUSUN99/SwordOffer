#pragma once

#include<string>

using namespace std;

int findNthDigit(int n) {
    // write code here

    int res = 0;

    long int count = 9;
    int digit = 1;
    long int start = 1;

    while (n > count)
    {
        n -= count;

        start *= 10;
         
        digit += 1;

        count = 9 * start * digit;
    }

    long int num = start + (n - 1) / digit;

    res = to_string(num)[(n - 1) % digit] - '0';

    return res;

}

void test_JZ44_findNthDigit()
{
    findNthDigit(1000000000);


}