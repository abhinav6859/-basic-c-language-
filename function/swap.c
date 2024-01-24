// pass by value 
#include<stdio.h>
{

    int a=3;
    int b=5;


   // int temp;
    // temp=a;
    //  a=b;
    // b=temp;
    // printf("%d\n",a);
    // printf("%d\n",b);
   
                   //or
    a=a+b;
    b=a-b;
    a=a-b;
     printf("%d\n",a);
    printf("%d\n",b);

}