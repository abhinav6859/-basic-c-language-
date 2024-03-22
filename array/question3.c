// write a program to copy the contents of one array into another in the reverse order 

#include <stdio.h>

int main()
{
  int i, n; 
    int arr1[n], arr2[n];  
    
    
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);  
    }
   
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];  
    }

    /* Prints the elements of the first array */
    printf("\nThe elements stored in the first array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);  // Print each element in the first array
    }
    /* Prints the elements copied into the second array. */
    printf("\n\nThe elements copied into the second array are :\n");
    for (i = n-1; i >= 0; i--)
    {
        printf("%d ", arr2[i]);  // Print each element in the second array
    }
    printf("\n\n");  
	return 0;
}
