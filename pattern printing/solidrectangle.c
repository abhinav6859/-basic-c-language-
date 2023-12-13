#include <stdio.h>
int main(void)  
{
    int n;
    int m;
    printf("enter row \n");
    scanf("%d",&n);// row of the solid rectangle
    printf("enter coloum\n");
    scanf("%d",&m);
    {for (int i=1;i<=n;i++)
    {for (int i=1;i<=m;i++){
        printf("*");
    }
    printf("\n");
    }
    }}