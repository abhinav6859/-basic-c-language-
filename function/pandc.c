#include<stdio.h>

int factorial(int x)
{
    int factorial=1;
    for (int i=2;i<=x;i++){
factorial=factorial*i;}
    return factorial;
}
int main (){

int n,r;
printf("enter n\n");
scanf("%d",&n);
printf("enter r\n");
scanf("%d",&r);
int ncr;
ncr=factorial(n)/(factorial(r)*factorial(n-r));
printf("%d\n",ncr);
return 0;}