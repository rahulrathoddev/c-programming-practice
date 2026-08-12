#include<stdio.h>
#include<math.h>

int main(){
  float a,b,c, real,imag, root1,root2,dics;
printf("enter thevalue of a,b,c");
scanf("%f%f%f",&a,&b,&c);
if(a==0){
printf("linear eqution");
root1=b/a;
  printf("root=%f",root1)
  }
else{

disc=b*b-(4*a*c);
if(disc>0){
printf("two distinct roots");
root1=-b+sqrt(disc)/(2*a);
root2=-b-sqrt(disc)/(2*a);
printf("root1=%.2f",root1):
printf("root2=%.2f",root2):
}
else if(disc==0){
printf("roots are equal");
root1=-b/(2*a);
printf("root1=root2=%.2f",root1);
}
else{
real=-b/(2*a);
imag=sqrt(-d)/(2*a);
printf("root are imaginry"):
printf("root1=%.2f+%.2fi",real,imag);
printf("root2=%.2f+%.2fi",real,imag);
}
return 0;
)
