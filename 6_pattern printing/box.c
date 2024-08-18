
/*#include <stdio.h>
int main(void)  
{
    int n;
    int m;
    printf("enter row \n");
    scanf("%d",&n);// row 
    printf("enter coloum\n");
    scanf("%d",&m);
    {for (int i=1;i<=n;i++)
    {for (int j=1;j<=m;j++){
      if(( (i==1)||(j==1))||( (i==n)||(j==m)))
      
      printf("*",j);
        else printf (" ");
    }
    printf("\n");}
    }}
    */
   #include <stdio.h>
    int main(void)  
{
    int n;
    int m;
    printf("enter row \n");
    scanf("%d",&n);// row 
    printf("enter coloum\n");
    scanf("%d",&m);
    {for (int i=1;i<=n;i++)
    {for (int j=1;j<=m;j++){

if(((i==1)||(j==1))||( (i==n)||(j==m)))
 
      printf("*",i);
        else printf (" ");
    }
    printf("\n");}
    }}