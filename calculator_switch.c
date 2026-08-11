#include<stdio.h>
int main(){
  float a,b,sum, div,multi,sub;
char op;
printf("enter value of a and b");
scanf("%f%f",&a,&b);
printf("enter an operator +,-,*,/");
scanf(" %c",&op);
switch(op){
case '+':sum=a+b;
  printf("sum is=%f",sum);  
break;
case '-':sub=a-b;
printf("sub=%f",sub);
break;
case '*':multi=a*b;
  printf("multiis=%f",multi);
break;
case '/':
    if (b != 0) {
        div = a / b;
      printf("div=%f",div);
    }
    else {
        printf("Cannot divide by zero!");
    }
    break;
default:
printf("invalid operator");

return 0;
)
