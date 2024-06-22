/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch;
    int i;
    printf("enter the character to be checked \n");
    scanf("%c", &ch);
    printf("enter 1 for chcked by ASCII code and 2 by variables function");
    scanf("%d", &i);
    if(i==1)
    {
        if(ch>='a' && ch <='z'|| ch>='A' && ch<="Z")
        printf("character is alphabet \n");
        else if (ch>='0' && ch<='9')
        printf("character is number \n");
        else
        printf("character  is special digit \n");
    }
    else
    {
        if(isalnum(ch))
        printf("character is alphanumeric \n");
        
        else if(isblank(ch))
        printf("character is blank space \n");
        
        else if(isalpha(ch))
        printf("character is alphabetic \n");
        
        else if(iscntrl(ch))
        printf("character is control character \n");
        
        else if(isupper(ch))
        printf("character is in uppercase \n");
        
        else
        printf("character is in lowercase \n");
    }

    return 0;
}
