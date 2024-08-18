#include <stdio.h>


int main (){
   int arr[ ]={6,7,8,8,7,6};
   int n =sizeof(arr)/sizeof(arr[0]);
   int a=0;
   int b;
   n=n/2;
  
   for (int i = 0; i < n; i++)
   {
     if (arr[i]==arr[4-i]){
      b=a;
   
}
   } if (b==0){
    printf(" array is palindrome \n");
   }
    else {
        printf("The array is not a palindrome.\n");
    }

 
}

/*

#include <stdio.h>
#include <stdbool.h>

// Function to check if the array is a palindrome
bool isPalindrome(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    
    // Continue until start < end
    while (start < end) {
        // If elements at start and end are not equal, array is not palindrome
        if (arr[start] != arr[end]) {
            return false;
        }
        start++;
        end--;
    }
    // If the loop completes, array is palindrome
    return true;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Check if the array is palindrome
    if (isPalindrome(arr, n)) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }
    
    return 0;
}
*/