#include<stdio.h>
void main(){
  int a,b,temp;
printf("enter a the number for  a and b:");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("%d%d",a,b);
}



#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
