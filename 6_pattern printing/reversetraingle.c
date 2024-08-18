/* print this:::
12345.....n
1234...(n-1)
123456...(n-2)
........
.......
123
12
1*/
#include <stdio.h>
int main(void)  
{
    int n;
    printf("enter row \n");
    scanf("%d",&n);
    {for (int i=0;i<=n;i++)
    {for (int j=1;j<=n-i;j++){
        printf("%d",j);
    }
    printf("\n");
    }
    }}