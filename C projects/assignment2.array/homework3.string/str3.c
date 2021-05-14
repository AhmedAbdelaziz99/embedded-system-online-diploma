/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>


int main()
{
    char str[100] , temp;
    int i , j =0;
    
    printf("\nEnter the string :");
    gets(str);
    
    i = 0;
    j = strlen(str) - 1;
    
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp ;
        i++ ;
        j-- ;
    }
    printf("\nReverse string is :%s", str);
    return 0;
}
