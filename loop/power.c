#include <stdio.h>
int main(void)
{
    int n;
    int x;
    int power =1;
    printf("enter base number\n");
    scanf("%d",&n);
     printf("enter power number\n");
    scanf("%d",&x);

    for (int i=1;i<=x;i++){
    power =power*n;
    }
    printf ("our power is %d\n",power);
}