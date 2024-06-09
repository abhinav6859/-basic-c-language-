//write a function to compute the greatest common divisor of two given numbers

#include<stdio.h>
 int divisor(int n,int m,int k){
  int l;
    for (int i=1;i<=k;i++){
        if (n%i==0 && m%i==0){
      l=i;
        }  
    }
    return l;
 }

int main (){
    int n,m ,k;
    printf("enter first number \n");
    scanf("%d",&n);

     printf("enter second number \n");
    scanf("%d",&m);
    if (n>m)
    k=m;
    else k=n;

  int ans=  divisor(n,m,k);
  printf("%d\n",ans);
  return 0;
}