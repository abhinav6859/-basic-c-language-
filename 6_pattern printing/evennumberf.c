/*
2468......
468...
681012.....
....

.......n  */
#include <stdio.h>
int main(void)  
{
    int n;
    int m;
    printf("enter row \n");
    scanf("%d",&n);
    printf("enter coloum\n");
    scanf("%d",&m);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++)
    {printf("%d",2*(i+(j-1)));
    }
    printf ("\n");
    }}
