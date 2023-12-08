// print the grade according to marks using else if
#include <stdio.h>
int main(void)
{
    int n;
    printf ("enter precentage :");
    scanf("%d",&n);
    if (n>=91)
    { 
        printf ( "excellent\n");

    }
    else if (n>=81)
    {
        printf ("very good\n");
    }
    else if (n>=71)
    {
        printf ("good\n");
    }
    else if (n>=61)
    {
        printf ("can do better\n");
    }
    else if (n>=51)
       {
        printf ("average\n");
    }
    else if (n>=41)
       {
        printf ("belo average\n");
    }
    else 
       {
        printf ("fail\n");
    }
}