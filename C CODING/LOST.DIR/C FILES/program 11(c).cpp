/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
  printf("Enter the number to check even or odd\n");
  scanf("%d", &n);
  if ((n/2)*2 == n)
    printf("the number is Even\n");
  else
    printf("the number is Odd\n");
return 0;
    
}
