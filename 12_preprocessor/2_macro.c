

// C Program to illustrate the macro
// #include <stdio.h>

// // macro definition
// #define LIMIT 8

// int main()
// {
//     for (int i = 0; i < LIMIT; i++) {
//         printf("%d \n", i);
//     }

//     return 0;
// }




// MACRO WITH ARGUMENTS 

// C Program to illustrate function like macros
#include <stdio.h>

// macro with parameter
#define AREA(l, b) (l * b)

int main()
{
    int l1 = 10, l2 = 5, area;

    area = AREA(l1, l2);

    printf("Area of rectangle is: %d", area);

    return 0;
}
