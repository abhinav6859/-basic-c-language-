#include <stdio.h>
int main(void)
{
    float pi = 3.14;
    float r;
    printf("enter the radius\n");
    scanf("%f", &r);

    float area = pi * r * r;
    printf("area of the circle\n%f\n", area);
}