/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
# include <conio.h>
int main()
{
    int a,b,c;
    printf("enter a,b,c:");
    scanf("\n%d%d%d",&a,&b,&c);
    printf("\nthe forward order:\n%d\n%d\n%d",a,b,c);
    printf("\nthe reverse order:\n%d\n%d\n%d",c,b,a);
    getch();
    return 0;
}