#include<stdio.h>
int main(){
  int array[10],n;
int max=array[0];
printf("enter how many element you want:");
scanf("%d",&n);
printf("enter the array element:\n");
for(int i=0;i<n;i++){
    printf("enter  element  %d :",i+1);
    scanf("%d",&array[i]);
}
for(int i=1;i<=n;i++){
if(array[i]> max){
max=array[i];
}
}
printf("the max is=%d",max);
return 0;
}
