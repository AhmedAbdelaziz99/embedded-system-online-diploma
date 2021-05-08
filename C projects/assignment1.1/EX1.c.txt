
#include <stdio.h>

int main()
{
  int number ;
  printf("enter an integer you want to check :");
  scanf("%d",&number);
  if (number % 2 == 0)
  {
      printf("%d is even",number);
  }
  else 
        printf("%d is odd",number);
    return 0;
}
