#include<stdio.h>

int main()
{
   double num1, num2;

   printf("Please enter a number: ");
   scanf("%lf", &num1);

   printf("Please enter another number: ");
   scanf("%lf", &num2);

    char plus, minus, into, division;
    plus = '+';
    minus = '-';
    into = '*';
    division = '/';

   double sum = num1 plus num2;
   double substraction = num1 minus num2;
   double multiplication = num1 into num2;
   double division = num1 division num2;

   printf("%0.2lf + %0.2lf = %0.2lf\n", num1, num2, sum);
   printf("%0.2lf - %0.2lf = %0.2lf\n", num1, num2, substraction);
   printf("%0.2lf * %0.2lf = %0.2lf\n", num1, num2, multiplication);
   printf("%0.2lf / %0.2lf = %0.2lf\n", num1, num2, division);

    return 0;
}