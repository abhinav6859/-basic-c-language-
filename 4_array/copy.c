// copy a array in to another array 

#include <stdio.h>

int main()
{
  int i, n;  // Declare variables to store array size and loop counter
    int arr1[n], arr2[n];  // Declare two arrays of size n to store integer values
    
    
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    // Prompt the user to input n elements into the first array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);  // Read the input and store it in the first array
    }
    /* Copy elements of the first array into the second array. */
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];  // Copy each element from the first array to the second array
    }

    /* Prints the elements of the first array */
    printf("\nThe elements stored in the first array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);  // Print each element in the first array
    }
    /* Prints the elements copied into the second array. */
    printf("\n\nThe elements copied into the second array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);  // Print each element in the second array
    }
    printf("\n\n");  
	return 0;
}
