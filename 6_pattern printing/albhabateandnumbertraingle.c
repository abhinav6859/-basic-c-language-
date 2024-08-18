/*
print
1
AB
123
ABCD
12345
............n*/
#include <stdio.h>
int main(void)  
{
    int n;
    int m;
    printf("enter row \n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
       int a=1;
        for (int j=1;j<=i;j++)
    { if (i%2==0)
    { 
    printf("%c",a+64);
    a++;}
    else printf("%d",j);
    }
    printf ("\n");
    }}
