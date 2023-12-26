// i want to try swastik not completed yet  
#include <stdio.h>
int main(void)  
{int n;
    printf("enter row \n");
    scanf("%d",&n);{
    for (int i=1;i<=n;i++){
    for (int j=1;j<=n;j++)  {
    if (j==(n+1)/2||i==(n+1)/2)
    printf("*",i);
    else printf(" ");}
    printf("\n");}}}