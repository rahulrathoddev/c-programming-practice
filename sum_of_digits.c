#include<stdio.h>
int main(){
  int num,rem,rev=0 ,sum=0;
printf("enter the value:");
scanf("%d",&num);
while(num!=0){
rem=num%10;
sum+=rem;
num=num/10;
}
printf("the sum of digit is=%d",sum);
return 0;
}
