// Another example program to demonstrate working
// of enum in C
#include<stdio.h>

enum year{Jan=1, Feb, Mar=78, Apr, May, Jun, Jul, 
		Aug, Sep, Oct, Nov, Dec};

int main()
{
int i;
for (i=Jan; i<=Dec; i++)	 
	printf("%d ", i);
	
return 0;
}
