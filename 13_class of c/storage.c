//  C Storage Classes are used to describe the features of a variable/function. 
// These features basically include the scope, visibility, 
// and lifetime which help us to trace the existence of a particular variable during
//  the runtime of a program.

// C language uses 4 storage classes, namely:

//https://media.geeksforgeeks.org/wp-content/cdn-uploads/Storage-Classes-In-C.png

// auto (default for local variables)
// register (suggests storing variable in a CPU register)
// static (preserves value across function calls)
// extern (extends variable's visibility across multiple files)

// auto: Local variables declared within a function are by default auto.
//  Their scope is limited to the block they're declared in.

// register: Suggests that the variable be stored in a register for faster access
//  (though this is only a suggestion, and the compiler may ignore it).

// static: Retains its value between function calls. The variable is initialized only once.

// extern: Declares a global variable that can be accessed across multiple files.

#include <stdio.h>

// Declare extern variable (defined later)
extern int extern_var;

void demoAuto() {
    auto int auto_var = 5;  // auto is default for local variables
    printf("auto_var: %d\n", auto_var);
}

void demoRegister() {
    register int reg_var = 10;  // register suggests variable be kept in a CPU register
    printf("reg_var: %d\n", reg_var);
}

void demoStatic() {
    static int static_var = 0;  // retains value across function calls
    static_var++;
    printf("static_var: %d\n", static_var);
}

int extern_var = 15;  // extern variable defined

int main() {
    printf("Demonstrating auto storage class:\n");
    demoAuto();

    printf("\nDemonstrating register storage class:\n");
    demoRegister();

    printf("\nDemonstrating static storage class:\n");
    for (int i = 0; i < 3; i++) {
        demoStatic();
    }

    printf("\nDemonstrating extern storage class:\n");
    printf("extern_var: %d\n", extern_var);

    return 0;
}
