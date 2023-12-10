//  print table of any number
#include <stdio.h>
int main(void)
{
    int n;
    printf("enter ur table \n ");
    scanf("%d", &n); 
    printf (" ur table\n");
    for (int i = n; i <= 10* n; i=i+n)
      {
      printf("%d\n",i);
    }
}  