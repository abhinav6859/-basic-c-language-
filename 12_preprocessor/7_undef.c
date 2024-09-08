// Following program is executed correctly as we have declared LIMIT as
//  an integer variable after removing previously defined macro LIMIT 

#include <stdio.h>
#define LIMIT 1000
int main()
{
	printf("%d", LIMIT);
// removing defined macro LIMIT
#undef LIMIT
	// Declare LIMIT as integer again
	int LIMIT = 1001;
	printf("\n%d\n", LIMIT);
	return 0;
}
