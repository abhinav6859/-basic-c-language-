#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    typedef struct date {
        int day ;
        int month;
        int year;

    }date ;
    date a,b;

    a.day=8;
    a.month=1;
    a.year=2001;

    b.day=8;
    b.month=1;
    b.year=2004;

    bool flag = true;
    if(a.day!=b.day) flag =false;
    if(a.month!=b.month) flag =false;
    if(a.year!=b.year) flag =false;

    if (flag==true)printf(" the dates are same \n");
    else printf("dates are not same \n");

}