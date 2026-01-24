#include <stdio.h>
int main (){

    /*
    A variable in C is a named piece of memory 
    which is used to store data and access it whenever required.

    there are different data types for storring almost evey kind of data eg int float  char etc*/
    int val1 = 10;
    float val2 = 120022.125;
    char ch = 'a';
    
    // now if we want to print it we have to use datatypes specifiers eg %d, %f, %fl, %ch
    
    printf("These are the values we stored preveously:\n int = %d\n float = %f\n char = %c\n", val1, val2, ch);

}