#include <stdio.h>

int factorial(int number);
int main()
{
    int number ;
    printf("Enter an positive integer: ");
    scanf("%d",&number);
    printf("factorial of %d = %ld.",number,factorial(number));

    return 0;
}

int factorial(int number)
{
   if(number!=1)

    return number*factorial(number-1);
}
