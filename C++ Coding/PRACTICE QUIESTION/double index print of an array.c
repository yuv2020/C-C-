/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[6]={9,3,5,4,1,2};
    int i, x;
    for(i=0;i<=6;i++)
    {
        if(a[i]%2!=0)
        {
            for (x=1;x<=i;x++)
            {
            
            printf("%d", a[i]);
            }
        }
    }

    return 0;
}
