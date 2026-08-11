#include<stdio.h>
int main(){
  int marks;
printf("enter marks:");
scanf("%d",&marks);
if(marks>90 && marks<=100){
printf("A grade");
}
else if(marks<=90 &&marks>80){
printf("B grade");
}
else if(marks<=80 && marks>70){
printf("c grade");
}
else if(marks<=70 &&marks>60){
printf("D grade");
}
else if(marks<=60 && marks>=50){
printf("E grade");
}
else{
printf("F grade");
}
return 0;
}

