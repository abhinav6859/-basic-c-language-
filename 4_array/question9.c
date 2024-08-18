// rotate the given array " a" by k steps ,where k is non negative .
// k can be greater than n as well where n is the size of array " a".

#include <stdio.h>

int main()
{
  int j, k, n; 
int a[n];
 printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);  
    }
   printf("k=");
   scanf("%d",&k);
    
   
    while (k>n)
    {
       k=k-n;
      
    }
    

    int temp;
    for (int h=0;h<=k;h++){
    temp=a[n-1];
    for(j=n-1; j>=0;j--)
    {
        a[j]=a[j-1];
    }
  a[0]=temp;
    }
   for (int i = 0; i < n; i++)
    printf("%d",a[j]);
    printf("\n\n");  
	return 0;
}
