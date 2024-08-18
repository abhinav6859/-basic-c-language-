#include <stdio.h>
// main function
int main ()
{
    int arr[5] = {2,4,6,8,1}; //declare an array of size 5 to store integer values

     // int size=5,arr[size];
    arr[4] =100;   //{2,4,6,8,100}
    arr[1] =15;   //{2,15,6,8,100}
   for (int  i = 0; i <= 4; i++)
   {
    printf("%d ",arr[i]);// Print each element in the array
   }
    printf("\n");


    float a[3]={1.2,3.5,6.4}; //store float value 
    for (int  i = 0; i <= 2; i++)
   {
    printf("%f ",a[i]);// Print each float value  in the array
   }
    printf("\n");




    char b[4] ={'a','3','*','+'}; //store character in the array  
    for (int  i=0;i<=3;i++)
    {
         printf("%c ",b[i]);// Print each character  in the array
    }
     printf("\n");


        return 0; // Indicate successful execution of the program
}

    