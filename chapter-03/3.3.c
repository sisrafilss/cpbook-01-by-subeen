#include<stdio.h>

int main(void)
{
    int n;
    
    n = -4;

    if (n < 0)
    {
        printf("The number is negative\n");
    }
    else if (n > 0)
    {
        printf("The number is positive\n");
    }
    else if (n == 0)
    {
        printf("The number is zero\n");
    }

    return 0;
}