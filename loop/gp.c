// display this gp 100,50,25 .... up to n 
#include <stdio.h>
int main(void)
{
float a=100;
    int n;
    printf("enter last digit \n ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    
    {
        printf("%f\n", a);
a=a/2;
    }
}