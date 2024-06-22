/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10],i;
    printf("Enter 10 no.s:\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
        
    }
    printf("\n You entered no. \n");
    for(i=0; i<10; i++)
    {
        printf("%5d",a[i]);
    }
    

    return 0;
}
