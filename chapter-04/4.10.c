#include <stdio.h>

int main(void)
{
    int n, i;


    for (n = 1; n <= 20; n = n + 1)
    {
        for (i = 1; i <= 10; i = i + 1)
        {
            printf("%d X %d = %d\n", n, i, n*i);
        }
        printf("\n");
    }

    return 0;
}