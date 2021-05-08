
#include <stdio.h>

int main()
{
  char alphabet ;
  printf("enter an alphabet:");
  scanf("%c",&alphabet);
  
  if (alphabet =='a' ||alphabet == 'A'|| alphabet =='e'||alphabet =='E' ||alphabet == 'i'||alphabet =='I' ||alphabet == 'o'||alphabet =='O' ||alphabet == 'u'||alphabet =='U')
  {
      printf("%c is vowel",alphabet);
  }
  else 
        printf("%c is constant",alphabet);
    return 0;
}
