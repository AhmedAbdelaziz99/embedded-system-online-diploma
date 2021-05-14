
#include <stdio.h>

int main()
{
  int a[30] , ele , num , i;
  printf("\nEnter no. of elements :");
  scanf("%d",&num);
  
 // printf("\nEnter rhe values :");
  for(i=0;i<num;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("Enter the element to be searched :");
  scanf("%d",&ele);
  
  i=0;
  while(i < num && ele != a[i])
  {
      i++;
  }
  if(i<num)
  {
      printf("number found at location = %d",i+1);
  }
  else
  {
      printf("number not found");
  }
   return 0;
}
