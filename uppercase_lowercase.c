#include<stdio.h>
void main(){
  char ch;
printf("enter  a character:");
scanf("%c",&ch);
if(ch>=65 && ch<=90){
printf("uppercase");
}
else{
printf("lowercase");
}
}
