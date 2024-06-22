/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int a,b,c;
    printf("enter three no. to be checked \n");
    scanf("%d %d %d", &a,&b,&c);
    if (a>b && a>c)
    {
        printf("largest %d \n",a);
        if(a%2==0)
        printf("largest no. is even \n");
        else
        printf("largest no. is odd \n");
        if(b>c)
        {
            printf("smallest %d \n", c);
        if(c%2==0)
        printf("smallest no. is even \n");
        else
        printf("smallest no. is odd \n");
        
        }
        else
        {
            printf("smallest %d \n",b);
            if(b%2==0)
            printf("smallest no. is even \n");
            else
            printf("smallest no. is odd \n");
            
        }
    }
    else if(b>a && b>c)
    {
        printf("largest %d \n", b);
        if(b%2==0)
        printf("largest no. is even");
        
        else
        printf("largest no. is odd \n");
        
        if(a>c)
        {
            printf("smallest %d \n",c);
            if(c%2==0)
            printf("smallest no. is even \n");
            else
            printf("smallest no.is odd \n");
        }
        
        else
        {
            printf("Smallest %d \n", a);
            if(b%2==0)
            printf("Smallest no. is  even \n");
            
            else
            printf("Smallest no. is  odd \n");
        }
    
    }
    
    else
    {
        printf("largest %d \n",c);
        if(c%2==0)
        printf("largest no. is even \n");
        else
        printf("largest no. is odd \n");
        if(a>b)
        {
            printf("Smallest %d  \n");
            if(b%2==0)
            printf("Smallest no. is even \n");
            else
            printf("Smallest no. is odd \n");
        }
        else
        {
            printf("Smallest %d  \n",a);
            if(a%2==0)
            printf("Smallest no. is even \n");
            else
            printf("Smallest no. is odd \n");
            
        }
    }

    return 0;
}
