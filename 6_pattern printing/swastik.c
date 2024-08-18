// i want to try swastika not completed yet  
#include <stdio.h>


    // function to print swastika
void swastika(int row, int coloum) 
{
for (int i=0;i<row;i++)
{
for (int j=0;j<coloum;j++)  
{
    if (i==row/2 || j==coloum/2)
     printf ("*");
     else printf(" ");
}

     printf ("\n");

if ((i<row/2) ||(j<coloum/2)){
        printf("*");
    }
else if (i==0)
{
     printf("*");
}
else if (j==0)
{
     printf("*");
}
else 
{
     printf(" ");
}
}

}

int main()  {
    int row,coloum ;
    printf ("enter row of swastika :");
    scanf("%d",&row);
     printf ("enter coloum of swastika :");
    scanf("%d",&coloum);
   swastika ( row,coloum) ;
    return 0;
    }




