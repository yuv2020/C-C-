/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int i, sum=0;
    int arr[5]={23,45,67,34,22};
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
        int*p;
        p=arr;
        for (i=0;i<5;i++)
    {
    sum=sum + *p;
    ++p;
    }
    
    printf("sum of an array %d\n:", sum);

    getch();
}
