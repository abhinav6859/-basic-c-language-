// C Program  to demonstrate the use of fseek() in C
#include <stdio.h>

int main()
{
    FILE* fp;
    fp = fopen("abhi.txt", "r");

    // Moving pointer to end
    fseek(fp, 0, SEEK_END);

    // Printing position of pointer
    printf("%ld", ftell(fp));

    return 0;
}
