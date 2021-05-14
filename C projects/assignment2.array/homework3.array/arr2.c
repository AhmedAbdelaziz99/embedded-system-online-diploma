
#include <stdio.h>

int main()
{
   int i,n;
   float num[100];
   float sum = 0;
   float average = 0;
   printf("enter the numbers of data:");
   scanf("%d",&n);
   while(n>100 || n <0)
   {
       printf("error the number should be in range of 1 to 100 :\n");
       printf("enter the number again :\n");
       scanf("%d",&n);
   }
   for(i=0;i<n;i++)
   {
       printf("%d. Enter number: ",i+1);
       scanf("%f",&num[i]);
       sum += num[i];
   }
   printf("sum = %f",sum);
   average = sum/n;
   printf("\nAverage = %f",average);
   
    return 0;
}
