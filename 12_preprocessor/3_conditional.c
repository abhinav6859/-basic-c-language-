//#ifdef macro_name
    // Code to be executed if macro_name is defined
// #ifndef macro_name
//    // Code to be executed if macro_name is not defined
// #if constant_expr
//     // Code to be executed if constant_expression is true
// #elif another_constant_expr
//     // Code to be excuted if another_constant_expression is true
// #else
//     // Code to be excuted if none of the above conditions are true
// #endif

//program to demonstrates the use of #if, #elif, #else,
// and #endif  preprocessor directives.
#include <stdio.h>

// defining PI
#define PI 3.14159

int main()
{
  
#ifdef PI
    printf("PI is defined\n");
  
#elif defined(SQUARE)
    printf("Square is defined\n");
#else
    #error "Neither PI nor SQUARE is defined"
#endif
  
#ifndef SQUARE
    printf("Square is not defined"); 
#else
    cout << "Square is defined" << endl;
#endif

    return 0;
}
