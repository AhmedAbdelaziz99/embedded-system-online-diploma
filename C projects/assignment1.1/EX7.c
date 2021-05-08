#include <stdio.h>
int main()
{
int n ,i ;
unsigned long long int factorial = 1;
printf("enter an integer :");
scanf("%d",&n);

if (n < 0 )

{
printf("Error !!! factorial of negative number doesn't exist.");
}

else 
{
for(i =1;i<=n;++i )
{
factorial*= i;   
}
printf("factorial = %lu",factorial);
}
return 0 ;
}
