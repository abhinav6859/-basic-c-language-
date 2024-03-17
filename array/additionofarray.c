//write a program to find sum of elements of the array 

#include <stdio.h>
int main ()
{
  int n, i;
  int a=0;
  int m=1;
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
   a=a+arr[i];
   m=m*arr[i];
   }
   printf("\n");

    
   printf("sum of the elements in the array is:");
   printf("%d\n",a);

printf("multiplication of the elements in the array is:");
   printf("%d\n",m);


        return 0;
}