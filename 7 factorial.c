#include<stdio.h>
int main(){
  int num,factorial=1;
printf("enter the value:");
scanf("%d",&num);
for(int i=1;i<=num;i++){
factorial*=i;
}
printf("the factorial of %d=%d",num,factorial);

return 0;
}
