//How to print and store a variable name in string variable?

#include <stdio.h> 
#define getName(var) #var 

int main() 
{ 
	int myVar; 
	printf("%s\n", getName(myVar)); 
	return 0; 
} 
