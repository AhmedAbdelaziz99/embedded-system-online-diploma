#include <stdio.h>
int main()
{
char num,i;
int sum = 0;
printf("enter an integer :");
scanf("%d",&num);
for (i=0 ; i<=num;i++)
{
    sum += i;
}
printf("sum = %d",sum);
return 0;
}
