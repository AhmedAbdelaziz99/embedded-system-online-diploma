/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char c[1000] , ch;
    int i , count = 0;
    printf("Enter a string :");
    gets(c);
    printf("enter a character to find frequency :");
    scanf("%c",&ch);
    for(i = 0;c[i] != 0 ;i++)
    {
        if(ch == c[i])
        ++count ;
    }
    printf("frequency of %c = %d",ch,count);

    return 0;
}
