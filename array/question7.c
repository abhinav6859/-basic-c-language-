// find the second largest element  of the given array 

#include <stdio.h>

int main ()
{
  int n,i;
// Prompt the user to input the size of the array   
 printf("Input the size of the array: ");
 scanf("%d", &n);

 // Declare an array of size n to store integer values
 int arr[n];

   for (  i = 0; i <= n-1; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
   }
int mx=arr[0];
int secondmax=arr[0];
  
   for (int i = 0; i < n; i++)
    {
        // Update mx if the current element is greater
        if (arr[i] > mx)
        {
            secondmax=mx;
            mx = arr[i];
        }
        else if (arr[i]>mx){
            secondmax=arr[i];
        }
    }
    
    //  for (int i = 0; i < n; i++)
    // {
    //     // Update mx if the current element is greater
    //     if (mx !=arr[i] && arr[i] > secondmax)
    //     {
    //         secondmax = arr[i];
    //     }}

        printf("%d ",secondmax);

        

printf("\n");
}