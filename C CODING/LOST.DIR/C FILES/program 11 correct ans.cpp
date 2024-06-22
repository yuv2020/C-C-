/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int number; 
 
    printf("Enter an integer: "); 
    scanf("%d", &number); 
 
    // True if the number is perfectly divisible by 2 
    if(number % 2 == 0) 
        printf("%d is even.", number); 
    else 
        printf("%d is odd.", number); 
 
    return 0; 
    
}
