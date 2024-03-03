#include <stdio.h>


float circle(float r){

printf("radius of circle is: ");
scanf("%f",&r);

    return( (3.14)*r*r);
}



int rectangle(int l,int b){
   
   
float r;
float area_of_circle = circle(r);


printf("enter length of rectangle \n");
    scanf("%d", &l);
printf("enter breadth of rectangle \n");
    scanf("%d", &b);
 printf(" area of circle  is : %f\n", area_of_circle);
    return l*b;
}

int area(int a)
{ int l,b;
int area_of_rectangle = rectangle(l,b);
    printf("enter side of square \n");
    scanf("%d", &a);
    printf(" area of rectangle  is : %d\n", area_of_rectangle);
    return a * a;

}
int main()
{
    int a;
    int area_of_square = area(a);

    printf(" area of square  is : %d\n", area_of_square);
    
  
    return 0;
}