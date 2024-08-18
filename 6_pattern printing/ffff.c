/* print the pattern
1
121
12321
12...
......
..........n,n-1.....1*/


#include <stdio.h>
int main(void)  
{
    int n;

    printf("enter row \n");
    scanf("%d",&n);// row 
    {for (int i=1;i<=n;i++)
    {int a=i-1;
    {for (int j=1;j<=i;j++)
    
   
    {
        printf("%d",j);
    }
     for (int k=1;k<=i-1;k++){
        printf("%d",a);
        a--;
    }
    printf("\n");}
    }
    }}