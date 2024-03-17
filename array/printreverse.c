
// take input from user then display the array nd also print in reverse order 

#include <stdio.h>
int main ()
{
   int arr[5];
   for (int  i = 0; i <= 4; i++)
   {
    printf("enter element number %d\n ",i+1);
    scanf("%d",&arr[i]);
   }

 printf("elements  of the array are :");
   for (int  i = 0; i <= 4; i++){
    printf("%d  ",arr[i]);
   }
   printf("\n");
    
    printf("reverse order  of the array are :");
   for (int  i = 4; i >= 0; i--){
    printf("%d  ",arr[i]);
   }
    printf("\n");
    
        return 0;
}