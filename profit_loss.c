#include<stdio.h>
int main(){
  float cp,sp;
printf("enter cost and selling price:");
scanf("%f%f",&cp,&sp);
if(sp>cp)
{
printf("profit");
}
else if(cp>sp){
printf("loss");
}
else
{
printf("no profit no loss");
}
return 0;
}
