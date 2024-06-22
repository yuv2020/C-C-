/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/** Program to find greatest number using pointer **/ 

int main()
{
    int num1, num2, num3;
    int *a, *b, *c;
    printf("Enter num1:\n");
    printf("Enter num2:\n");
    printf("Enter num3:\n");
    
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    
    a=&num1;
    b=&num2;
    c=&num3;
    
    if((*a > *b) && (*a > *c))
    {
        printf("greatest number is =%d", *a);
    }
    
    else
    {
        if((*b > *c) && (*a < *b))
    {
    printf("greatest number is =%d", *b);
    }
    else
    {
        if((*c > *b) && (*a < *c))
        printf("greatest number is =%d", *c);
    }
    }
    return 0;
}
