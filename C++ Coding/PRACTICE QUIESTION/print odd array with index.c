/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[100], i,limit;
    printf("How many elements you want to store inside the array:");
    scanf("%d",&limit);
    
    printf("Enter any %d elements of the array:", limit);
    for(i=0;i<limit;i++)
    
    scanf("%d", &arr[i]);
    printf("\n values stored in odd position (with array and its index) are:\n");
    for(i=0;i<limit;i++)
    
    {
        if (i%2!=0)
        printf("arr[%d]=%d\n", i, arr[i]);
        
    }
    
    return 0;
}