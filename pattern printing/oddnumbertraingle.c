/* odd nuber traingle 
1
13
135
.......n*/
#include <stdio.h>
int main(void)  
{
    int n;
    printf("enter row \n");
    scanf("%d",&n);// row 
    {for (int i=1;i<=n;i++)
    {for (int j=1;j<=i*2;j++){
        if (j%2!=0)
        printf("%d",j);
    }
    printf("\n");
    }
    }}