/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float x=3.0, y=12.5, z=523.3, A=300.0, B=1200.5, C=52300.30;
    printf("x\t y\t z=\t%5.1f|\t% 5.1f|\t % 5.1f\|t % 5.1 f |\n",x,y,z);
    printf("A\t B\t C=\t%5.1f|\t% 5.1f|\t % 5.1f\|t % 5.1 f |\n",A,B,C);
    printf("x\t y\t z=\t% 5.2f|\t% 5.2f|\t % 5.2f\|t % 5.2 f |\n",x,y,z);
    printf("X\t y\t z=\t%5.1f|\t% 5.1f|\t % 5.1f\|t % 5.1 f |\n",x,y,z);
    printf("A\t B\t C=\t% 5.2f|\t% 5.2f|\t % 5.2f\|t % 5.2 f |\n",A,B,C);
    return 0;
}
