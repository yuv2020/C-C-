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
    int age;
    cout<< "What is your age"<<endl;
    cin>>age;
    
    if (age<18){
    cout<<"you can not come in my party"<<endl;
    }
    
    else if (age==18){
    cout<<"You are a kid and you will get a gate pass"<<endl;
    }
    
    else{
        cout<<"You can come in party"<<endl;
        
    }
}