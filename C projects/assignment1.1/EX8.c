
#include <stdio.h>
int main()
{
char operator;

float num1 , num2 , result;

printf("enter oper either + or - or * or divide / :\n");
scanf("%c",&operator);
printf("enter two operands :");
scanf("%f %f",&num1,&num2);
switch (operator)
{
case '+' :
printf("%f %c %f = %f",num1,operator,num2,result=num1+num2);
break;
case '-':
printf("%f %c %f= %f",num1,operator,num2,result=num1-num2);
break;
case '*':
printf("%f %c %f = %f",num1,operator,num2,result=num1*num2);
break;
case '/':
printf("%f %c %f =%f",num1,operator,num2,result=num1/num2);
break;
default :
printf("wrong operator");
}

return 0;
}
