/**
 * c program to display febonacci series
 */
 
#include <stdio.h>

int main()
{
    int n1=0, n2=1, n3,  i, number;
    printf("enter the number  of elements\n");
    scanf("%d/n", &number);
    printf("\n %d %d", n1,n2);
    for (i=2;  i<number; ++i)//loop starts fro 2 because 0 and 1 are already pointed.
    {
        n3=n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;
        
        
    }

    return 0;
}
