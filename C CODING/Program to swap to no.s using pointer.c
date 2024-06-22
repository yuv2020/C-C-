/** Program to find swap of two no.s using pointer. **/
#include <stdio.h>

int main()
{
    int n1,n2;
    int *a,*b;
    
    printf("Enter value of n1:\n Enter value of n2:\n");
    scanf("%d %d", &n1, &n2);
    
    printf("Before swap n1=%d  n2=%d ", *a ,*b);
    a=&n1;
    b=&n2;
    
    
    *a=*b;
    *b=*a;
    
    printf("After swap n1=%d n2=%d", *a ,*b);

    return 0;
}
