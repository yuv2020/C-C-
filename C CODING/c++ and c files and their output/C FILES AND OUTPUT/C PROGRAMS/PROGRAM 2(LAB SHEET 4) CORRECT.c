/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int a; char ch, chr;
    printf("enter the alphabet to be checked \n");
    scanf("%c",&ch);
    chr=toupper(ch);
    printf("enter 1 to check by if else and 2 by switch case \n");
    scanf("%d",&a);
    if(a==1)
    {
        if(chr=='A'||chr=='E'||chr=='I'||chr=='O'||chr=='U')
        printf("given alphabet is vowel \n");
        
        else
        printf("It is not vowel \n");
    }
    else
    {
        switch(chr){
            case'A':
            printf("it is vowel \n");
            break;
            case'E':
            printf("it it vowel \n");
            break;
            case'I':
            printf("it is vowel \n");
            break;
            case 'o':
            printf("it is vowel \n");
            break;
            case 'u':
            printf("it is vowel \n");
            break;
            }
    }
    

    return 0;
}
