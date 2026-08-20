// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[10];
    int n=5;
    printf(":enter arrray element:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
       int product=1;
for(int i=0;i<n;i++){
    product*=arr[i];
    }
    // Write C code here
    printf("product=%d",product);
    return 0;
}
