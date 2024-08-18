// price of anything with include gst 

#include<stdio.h>

float g (float n){
 


  
    return(n+(n/100)*18);

}


int main()
{ int n;
    printf("enter n: ");
    scanf("%d",&n);
{
  float gst =g (n);
  printf("%lf\n",gst);
    return 0;}

}