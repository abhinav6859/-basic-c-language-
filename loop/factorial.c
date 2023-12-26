#include <stdio.h>
int main(void)
{
    int n;
    int factorial =1;
    printf("enter any number\n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
    factorial=factorial*i;
    printf ("our factorial of %d is %d\n",i,factorial);}
}