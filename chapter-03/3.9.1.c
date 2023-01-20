#include<stdio.h>

int main(void)
{
    int number, division, multiplicaiton, remainder;

    number = 33; // determine the remainder of 33 / 5 without using modulus (%) operator

    division = 33 / 5;
    multiplicaiton = 5 * division;
    remainder = number - multiplicaiton;

    printf("Remainder is %d\n", remainder);

    return 0;
}