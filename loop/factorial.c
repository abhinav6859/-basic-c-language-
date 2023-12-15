#include <stdio.h>
int main(void)
{
    int n;
    int factorial =1;
    printf("enter any number");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
    factorial=factorial*i;}
    printf ("our factorial is %d\n",factorial);
}