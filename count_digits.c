#include<stdio.h>
int main(){
  int num,digit,count=0;
printf("enter the value:");
scanf("%d",&num);
while(num!=0){
digit=num%10;
num=num/10;
  count++;
  
}
printf("the digit =%d:",count);
return 0;
}
