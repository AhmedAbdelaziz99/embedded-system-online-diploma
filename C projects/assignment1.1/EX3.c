
#include <stdio.h>
int main()
{
float a,b,c,largest;
printf("Enter three numbers :");
scanf("%f %f %f",&a, &b ,&c);
if ((a>b)&&(a>c))
{
printf("largest number = %f ",a);
}
else if ((b>c)&&(b>a))
{
printf("largest number = %f",b);
}
else
{
printf("largest number = %f",c);
}
return 0;
}
