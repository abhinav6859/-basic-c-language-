#include <stdio.h>
int main(void)
{
    int x;
    printf("enter a number\n ");
    scanf("%d\n", &x);
    if (x < 0)
    {
        x = x * (-1);
    }
    printf("the absolute value is: "
           "%d",
           x);
}