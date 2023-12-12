#include <stdio.h>
int main(void)
{
int n;
int sum=0;
  printf("enter number ");
  scanf("%d",& n);{
  for (int i=0;i<=n;i=i+2)
  sum=sum+i;
  }
  printf("%d",sum);
}