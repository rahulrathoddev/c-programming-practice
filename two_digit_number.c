#include<stdio.h>
int main(){
  int num;
printf("enter a number:");
scanf("%d",&num);
if ((num >= 10 && num <= 99) || (num >= -99 && num <= -10))
{
printf("two digit number");
}
else{
printf("not a two digit number");
} 
return 0;
}
