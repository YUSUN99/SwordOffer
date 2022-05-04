#pragma once


int Add(int num1, int num2) 
{
    while (num2 != 0)
    {
        int c = (unsigned int)(num1 & num2) << 1;
        num1 ^= num2;
        num2 = c;
    }
    return num1;
}


void test_JZ65_Add()
{
    Add(1, 2);
    Add(3, 3);

}