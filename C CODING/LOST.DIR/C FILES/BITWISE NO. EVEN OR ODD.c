
#include<stdio.h>

int main()

{
    int a;
    printf("Enter a  number:");
    scanf("%d", &a);
    
    if (a & 1)
    {
        printf("%d the number is odd.", a);
        
    }
    
    else
    {
        printf("%d the number is even.", a);
        
    }
    
    return 0;
}    