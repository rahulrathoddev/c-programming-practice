#include<stdio.h>
int  main(){
  float a,b,c;
printf("enter the sides of triangle:");
scanf("%f%f%f",&a,&b,&c);
if(a+b>c && b+c>a &&a+c>b){
printf("valid trinagle");
}
else{
printf("invalid triangle");
}
return 0;
}
