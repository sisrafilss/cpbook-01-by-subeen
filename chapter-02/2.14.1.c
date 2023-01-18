#include<stdio.h>

int main()
{
   int num1, num2;

   printf("Please enter a number: ");
   scanf("%d", &num1);

   printf("Please enter another number: ");
   scanf("%d", &num2);

   int sum = num1 + num2;
   int substraction = num1 - num2;
   int multiplication = num1 * num2;
   int division = num1 / num2;

   printf("%d + %d = %d\n", num1, num2, sum);
   printf("%d - %d = %d\n", num1, num2, substraction);
   printf("%d * %d = %d\n", num1, num2, multiplication);
   printf("%d / %d = %d\n", num1, num2, division);

    return 0;
}