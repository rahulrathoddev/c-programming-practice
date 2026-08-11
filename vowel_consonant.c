#include<stdio.h>
int main(){
  char ch;
printf("enter a alphabets:");
scanf("%c",&ch);
if(ch=='A'|| ch=='E'||ch=='I' || ch=='O' || ch=='U'||ch=='a'|| ch=='e'|| ch=='i'|| ch=='o' || ch=='u'){
printf("alpbet is vowel");
}
else{
printf("consonant");
}
return 0;
}
