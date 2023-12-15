#include <stdio.h>
int main(void)  
{
    int n;
    printf("enter term \n");
    scanf("%d",&n);
int a=1;
int b=1;
int sum=1;
for (int i=1;i<=n-2;i++){
sum=a+b;
a=b;
b=sum;}
printf("the %d""th term of fibonnaci number is :%d\n",n,sum);
}