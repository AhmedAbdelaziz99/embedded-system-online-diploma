
#include <stdio.h>

int main()
{
   int a[10][10] , trans[10][10] , r , c , i , j;
   printf("enter rows and column of matrix : \n");
   scanf("%d %d",&r ,&c);
   printf("\n enter elements of matrix : \n");
   
   for(i=0; i<r ; i++)
   for(j=0; j<c ; j++)
   {
       printf("enter elements a%d%d :",i+1,j+1);
       scanf("%d",&a[i][j]);
   }
   printf("\n Entered matrix: \n");
   for(i=0; i<r ; i++)
   for(j=0; j<c ; j++)
   {
       printf("%d  ",a[i][j]);
       if (j == c-1)
       printf("\n\n");
   }
   for(i=0; i<r ; i++)
   for(j=0; j<c ; j++)
   {
       trans[j][i] = a[i][j]; 
   }
   printf("transpose matrix :\n");
   for(i=0; i<r ; i++)
   for(j=0; j<c ; j++)
   {
       printf("%d   ",trans[i][j]);
       if (j == r-1)
       printf("\n\n");
   }
   
   return 0;
}
