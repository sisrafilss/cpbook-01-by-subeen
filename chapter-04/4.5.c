#include<stdio.h>

int main(void)
{
    int n = 1;

    while (n < 10)
    {
        n = n + 1;
        if (n % 2 == 0)
        {
            continue;
        }
        printf("%d\n", n);
    }

    n++;

    return 0;
}