#include<stdio.h>
 int factorial (int x)
{
 int factorial=1;
    for (int i=2;i<=x;i++){
factorial=factorial*i;}
    return factorial;
}

int  combination(int n,int r)
{int ncr=factorial(n)/(factorial(r)*factorial(n-r));
return ncr;
}
int main ()
{

int n;
printf("enter n\n");
scanf("%d",&n);

for (int i=0;i<=n;i++)
{
for (int j=0;j<=i;j++)
{
int icj =combination (i,j);
printf("%d",icj);}
printf("\n");}
return 0;
}