#include <stdio.h>
int main ()
{
  int n, i;
// Prompt the user to input the size of the array
 printf("Input the size of the array: ");
 scanf("%d", &n);

 // Declare an array of size n to store integer values
 int arr[n];

   for (int  i = 0; i <= n-1; i++)
   {
    printf("enter element number %d\n ",i+1);
    scanf("%d",&arr[i]);
   }

   printf("elements in the array are\n");
   for (int  i = 0; i <= n-1; i++){
    printf("%d  ",arr[i]);//print each element in the array 
   }
    
        return 0;// Indicate successful execution of the program
}