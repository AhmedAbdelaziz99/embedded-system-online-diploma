#include <stdio.h>
int main()
{
float num;
printf("Enter a number:");
scanf("%f",&num);

if (num == 0)
{
printf("you entered zero.");
}
else if(num > 0 )
{
printf("%f is positive",num);
} 
else 
{
printf("%f is negative",num);

}
return 0;
}
