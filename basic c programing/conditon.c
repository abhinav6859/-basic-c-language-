// check number is three digit number
#include <stdio.h>
int main(void)
{
    int n;
    printf ("enter a number\n");
    scanf("%d",&n);
    if(n>99 && n<1000)
    {
       printf(" the number is three digit number");
    }
    else {
        printf ("number is not three digit number");
            }
}