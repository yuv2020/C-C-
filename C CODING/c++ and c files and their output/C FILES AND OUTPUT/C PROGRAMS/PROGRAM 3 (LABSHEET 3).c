/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#define pi 3.1415
#define mult(a,b) (a*b);
#define sum(a,b) (a+b);
#define sub(a,b) (a-b);
#define div(a,b) (a/b);

void
main ()
{
  int a = 8, b = 4;
  float c;
  c = pi * mult (a, b);
  printf ("Multiply of a and b is %f \n", c);

  c = 0;
  c = pi * sum (a, b);
  printf ("Sum of a and b is %f\n", c);

  c = 0;
  c = pi * sub (a, b);
  printf ("Subtraction of a and b is %f\n", c);

  c = 0;
  c = pi * div (a, b);
  printf ("Division of a and b is %f\n", c);

  return 0;
}
