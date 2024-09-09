//How to print and store a variable name in string variable?

// #include <stdio.h> 
// #define getName(var) #var 

// int main() 
// { 
// 	int myVar; 
// 	printf("%s\n", getName(myVar)); 
// 	return 0; 
// } 


//We can also store variable name in a string using sprintf() in C.
#include <stdio.h> 
#define getName(var,str) sprintf(str, "%s", #var)  

int main() 
{ 
    int myVar; 
    char str[20]; 
    getName(myVar, str); 
    printf("%s\n", str); 
    return 0; 
}  