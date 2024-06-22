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
  if (n & 1 == 1)
    printf("The number is Odd\n");
  else
    printf("The number is Even\n");
  return 0;
}
