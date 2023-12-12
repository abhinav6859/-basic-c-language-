#include <stdio.h>
int main(void)
{
    int n;
    int sum=0;
    int lastdigit =0;
    printf("enter any number");
    scanf("%d",&n);
    {
    while (n!=0){
    lastdigit = n%10;
    sum =sum +lastdigit;
    n=n/10;}
    printf(" the sum of all digit %d",sum);}
}