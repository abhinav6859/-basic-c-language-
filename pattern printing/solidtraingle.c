/* print the pattern
1
12
123
12...
......
..........n*/

#include <stdio.h>
int main(void)  
{
    int n;
    printf("enter row \n");
    scanf("%d",&n);// row 
    {for (int i=1;i<=n;i++)
    {for (int j=1;j<=i;j++){
        printf("%d",j);
    }
    printf("\n");
    }
    }}