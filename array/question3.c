// write a program to copy the contents of one array into another in the reverse order 

#include <stdio.h>

int main()
{
  int n; 
    int arr1[6]= {6,5,98,8,43,67};
    int arr2[6];  
    
  
   
    for (int i = 0; i <= 5; i++)
    {
        arr2[i]=arr1[5-i] ;  
    }

   
    /* Prints the elements copied into the second array. */
    printf("\n\nThe elements copied into the second array are :\n");
    for (int i = 0; i<6; i++)
    {
        printf("%d ", arr2[i]);  // Print each element in the second array
    }
    printf("\n\n");  
	return 0;
}
