/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int integertype;
    char chartype;
    float floattype;
    double doubletype;
    long double longdoubletype;
    
    printf("sizeof int is:%ld\n", sizeof(integertype));
    printf("sizeof char is:%ld\n", sizeof(chartype));
    printf("sizeof float is:%ld\n", sizeof(floattype));
    printf("sizeof double is:%ld\n", sizeof(doubletype));
    printf("sizeof longdouble is:%ld\n", sizeof(longdoubletype));
    

    return 0;
}
