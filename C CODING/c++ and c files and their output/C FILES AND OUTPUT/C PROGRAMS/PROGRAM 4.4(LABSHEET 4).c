/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int a;
    printf("Enter the no. to be checked\n");
    scanf("%d", &a);
    if (a%5==0 && a%7==0 || a%11!=0)
    printf("No. is multiple of 5 and divisible by 7 but not by 11");
    else
    printf("No. is not multiple of 5 and not divisible of 7 and 11");

    return 0;
}
