// display this gp 100,50,25 .... up to n 
#include <stdio.h>
int main(void)
{
int a=0;
    int n;
    printf("enter last digit \n ");
    scanf("%d", &n);
    for (int i = 2; i <= n-1; i++)
    if (n%i==0)
    {int a=1;
    break;}
    if(n==1)
    printf(" 1 number is neither prime nor composite");
    else if  (a==1)
    printf(" number is composite");
    else 
    printf("number is prime");    
}