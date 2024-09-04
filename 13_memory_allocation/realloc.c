//realloc” or “re-allocation” method in C is used to dynamically change the memory 
// allocation of a previously allocated memory. In other words, 
// if the memory previously allocated with the help of malloc or calloc is insufficient, 
// realloc can be used to dynamically re-allocate memory.
//  re-allocation of memory maintains the already present value and new blocks will
//   be initialized with the default garbage value.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int* ptr=malloc(5*sizeof(int));
    printf("%p\n",ptr);  //00351770
    ptr=realloc(ptr,200*4);
    printf("%p",ptr);//00353650
    // different address bcz there were not enough space to reallocate memory
}