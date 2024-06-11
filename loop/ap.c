// display this arithmetic progression 4,7,10,13,16..........up to any number n//  print natural  numbers from 1 to n
#include <stdio.h>
int main(void)
{
    int n;
    printf("enter digit \n ");
    scanf("%d", &n);
    for (int i = 4; i <= n; i= i+3)
    {
        printf("%d\n", i);
    }
}