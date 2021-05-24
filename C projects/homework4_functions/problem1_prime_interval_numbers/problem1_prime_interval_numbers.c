#include <stdio.h>

int check_prime(int number);
int main()
{
    int num1 , num2;
    int i , signal;
    printf("Enter two numbers (intervals):\n");
    scanf("%d %d",&num1,&num2);
    printf("prime numbers between %d and %d are:  ",num1,num2);
    for(i = num1+1;i<num2;++i)
    {
        signal = check_prime(i);
        if (signal == 0)
            printf("%d\t",i);
    }
    return 0;
}

int check_prime(int number)
{
    int j , flag = 0;
    for(j=2;j<=number/2;j++)
    {
        if(number%j==0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
