/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char c[1000] , i;
    printf("Enter a string :");
   scanf("%s",c);
   
    for(i = 0 ; c[i] !='\0' ; ++i)
    
      printf("Length of string :%d",i);

    return 0;
}
