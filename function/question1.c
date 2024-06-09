//a positive integer is entered throgh the keyboard .write a function to optain the 
// prime factors of this number.


#include<stdio.h>
 int primefactor (int l){
    int a;
    int ans;
    for (int j =2; j <l; j++)
    {
        if (l%j ==0)
      {a=1;
     break;
      }
      else a=0;
    }
    if (a=0)
        return ans;
    
   
 }

 int divisor(int n){
 int l;
    for (int i=1;i<=n;i++){
        if (n%i==0){
            l=i;
          
       int ans=  primefactor(l);
        printf("%d ",ans); 
        } 
    }
    return 0;
 }

int main (){
    int n;
    printf("enter first number \n");
    scanf("%d",&n);


   divisor(n);
 
  return 0;
}