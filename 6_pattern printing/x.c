
#include <stdio.h>
int main(void)  
{
    int n;
    int m;
    printf("enter row \n");
    scanf("%d",&n);
   
   {
    for (int i=1;i<=n;i++){
    for (int j=1;j<=n;j++
    ){
    if (i+j==n+1||i==j)
    printf("*",i);
    else printf(" ");}
    printf("\n");
    }    
}}