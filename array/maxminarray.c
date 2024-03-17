#include <stdio.h>

int main()
{
    int arr[100];
    int i, mx, mn, n;

   
    printf("\n\nFind maximum and minimum element in an array :\n");
     
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    // Input elements for the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Initialize max (mx) and min (mn) with the first element of the array
    mx = arr[0];
    mn = arr[0];

    // Traverse the array to find the maximum and minimum elements
    for (i = 1; i < n; i++)
    {
        // Update mx if the current element is greater
        if (arr[i] > mx)
        {
            mx = arr[i];
        }

        // Update mn if the current element is smaller
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
    }

    // Print the maximum and minimum elements
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
	return 0;
}
