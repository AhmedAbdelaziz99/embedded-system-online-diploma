#include <stdio.h>

int main()
{
   float a , b ,temp;
   printf("Enter value of a: ");
   scanf("%f",&a);
   printf("Enter value of b: ");
   scanf("%f",&b);
 
  //for example a = 3 , b = 7 
   a = a + b; // 3 + 7 = 10
   b = a - b; // 10 - 7 = 3 = b
   a = a - b; // 10 - 3 = 7 = a
   printf("After swapping, value of a = %f\n",a);
   printf("After swapping, value of b = %f",b);

    return 0;
}
