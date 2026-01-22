#include <stdio.h>

/* 
Void Data Type
Represents no value or empty type.
Used in functions that do not return any value.
Can also be used for generic pointers (void *) in memory operations.
*/
void test()
{
    printf("Hello, Welcome!\n");
} 
int main (){

    //data types
    //Basic Data Types
    int     d;     
    float   f;
    double  lf;
    char    c;

    d   =   20        ;
    f   =   5.7       ;
    lf  =   3.123456  ;  
    c   =   'A'       ;
    
    printf("\nThese are the basic data types in c:-\n");
    printf("Int can store no's 1 or 2 max eg: %d\n", d);
    printf("Float can store no's too but more accurately eg: %f\n", f);
    printf("Double is more precise then float eg: %lf\n", lf);
    printf("Char can store characters eg: %c\n", c);

    // we can use sizeof() to know size of the data types.
    printf("\nHere are the use of sizeof(). It can tell the size of any datatype");
    printf("These are the basic data types in c:-\n");
    printf("Int can store no's 1 or 2 max eg: %d\n", d);
    printf("Float can store no's too but more accurately eg: %f\n", f);
    printf("Double is more precise then float eg: %lf\n", lf);
    printf("Char can store characters eg: %c\n", c);
  
    /*
    Derived Data Types36+
    array
    pointer
    function

    User Defined Data Types
    union
    stucture
    enum



    */
    return 0;
}