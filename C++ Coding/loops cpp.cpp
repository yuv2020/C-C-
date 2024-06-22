/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

bool accept()
{
    cout<<"Do you want to proceed(yes or no)?\n;
    char answer = 0;
    cin>>answer;
    
    if(answer=='yes')return true;
    return false;
    
}

bool accept2()
{
    cout<<"Will you want to support to me("yes or no")?\n;
    char answer=0;
    
    
    cin>> answer;
    
    switch(answer)
    {
        case 'yes':
        return true;
        
        case 'no':
        return false;
        default:
        cout<<"I have to think.\n";
        
        return false;
        
    }
}