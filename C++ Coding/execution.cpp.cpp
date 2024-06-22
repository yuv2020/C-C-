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
    int number;
    cout<<"Enter an integer:";
    cin>>number;
    if(number>0)
    {
        cout<<"You entered a positive integer:"<< number<<endl;
    }
    cout<<"This statement is always executed";
    
    return 0;
}