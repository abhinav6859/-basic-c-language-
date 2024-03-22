
 /*5 Write a program in C to print all unique elements in an array.

Print all unique elements of an array:
*/

#include <stdio.h>

int main() {
    int n, i, j;
    
    // Input the number of elements
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input elements into the array
    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    // Print unique elements
    printf("The unique elements found in the array are:\n");
    for(i = 0; i < n; i++) {
        int isUnique = 1;
        for(j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if(isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    return 0;
}
