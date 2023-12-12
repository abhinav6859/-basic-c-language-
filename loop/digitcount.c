// count digit of a given number 
#include <stdio.h>
int main(void)
{
    int n;
    printf ("enter number ");
    scanf("%d",&n);
    int count =0;
    while (n!=0)
{
    n=n/10;
    count ++;
}
printf("the number og digits are %d\n",count);
}