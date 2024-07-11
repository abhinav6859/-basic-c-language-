#include<stdio.h>
int main(){

char arr[]={'a','b','c','d'};
int n=sizeof(arr)/sizeof(arr[0]);

// string
printf(" ur string \n");
for(int i=0;i<n;i++){
printf("%c ",arr[i]);
}
printf("\n");

//for address
printf("address of string  \n");
for(int i=0;i<n;i++){
printf("%p \n ",&arr[i]);
}

//ASCII value
printf("ASSCII value of string \n");
for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}
    return 0;
}
// C program to print string using Pointers
// #include <stdio.h>

// int main()
// {

// 	char str[20] = "GeeksforGeeks";

// 	// Pointer variable which stores
// 	// the starting address of
// 	// the character array str
// 	char* ptr = str;

// 	// While loop will run till 
// 	// the character value is not
// 	// equal to null character
// 	while (*ptr != '\0') {
// 		printf("%c", *ptr);
	
// 		// moving pointer to the next character.
// 		ptr++;
// 	}

// 	return 0;
// }
