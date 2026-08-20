#include<stdio.h>
int main(){
    int array[100],count=0,n,x=10;
    printf("enter how many arrray  element:\n");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(int i=0;i<n;i++){
        printf("enter element %d=",i+1);
        scanf("%d",&array[i]);

    }
    for(int i=0;i<n;i++){

for(int j=i+1;j<n;j++){
    if(array[i]+array[j]==x)
    count++;
}
    }
printf(" the sum of %d pairs  is= %d",x,count);
return 0;
    }
