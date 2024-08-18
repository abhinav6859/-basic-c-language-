#include<stdio.h>

int main(){
    void fun(); //function prototype 
                // from function prototype no mater from order    
    fun();
    return 0;
}
void fun(){
    printf("hello\n");

}