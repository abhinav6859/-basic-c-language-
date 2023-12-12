// print the sum of the series 1-2+3-4+5-6+7-8+9........up to n
//#include <stdio.h>
//int main(void)
//{
//int n;
//int sum =0;
//int l =0;
/*printf ("enter a number\n");
scanf("%d",&n);
for (int i=1;i<=n;i++){
   if (i%2!=0){
     sum=sum+i;}
else 
sum=sum -i ;}
//printf("%d",sum);}
// we can write this program by formula also */
#include <stdio.h>
int main(void)
{
int n;
  printf("enter number ");
  scanf("%d",& n);
  {
  int sum =0;
  if (n%2==0){
    sum=-n/2;  
  }
  else {
    sum=(n+1)/2;
  }
    printf("%d",sum);
  }
}