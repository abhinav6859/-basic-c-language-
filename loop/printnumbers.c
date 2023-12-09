//  print natural  numbers from 1 to n
#include <stdio.h>
int main(void)
{
    int n;
    printf("how much number u want to print \n ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }
}