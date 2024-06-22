/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int numbers[5]={7,5,6,12,35};
    cout<<"The numbers are";
    
    //Printing elements of an array.
    for(const int & n:numbers)
    {
        cout<<"\n The  numbers are";
    
        //Printing array elements.
        for(int i=0; i<5; ++i)
        
        {
            cout<<numbers[i]<<" ";
        }
        
        return 0;
    }
    
}
