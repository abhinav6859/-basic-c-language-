    
#include <stdio.h>
int main(void)
{
    int n;
    int sum=0;
    int lastdigit =0;
    printf("enter any number\n");
    scanf("%d",&n);
    {
    while (n!=0){
    lastdigit = n%10;
    if (lastdigit%2==0){
    sum =sum +lastdigit;
    n=n/10;}}
    printf(" the sum of all  even digit is  %d\n",sum);}
}