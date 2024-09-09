//https://www.geeksforgeeks.org/basics-file-handling-c/?ref=lbp

//Creating a new file – fopen() with attributes as “a” or “a+” or “w” or “w+”
// Opening an existing file – fopen()
// Reading from file – fscanf() or fgets()
// Writing to a file – fprintf() or fputs()
// Moving to a specific location in a file – fseek(), rewind()
// Closing a file – fclose()

#include<stdio.h>
int main (){
    FILE* ptr=fopen("abhi.txt","r");
    char str[100];
   while( fgets(str,100,ptr)!=NULL)
   printf("%s",str);


}