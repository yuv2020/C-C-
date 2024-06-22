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
    char oper;
    float num1, num2;
    cout<<"enter an operator (+,-,*,/):";
    cin>>oper;
    cout<<"Enter two numbers:"<< endl;
    cin>>num1>>num2;
    switch (oper)
    {
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;
        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;
        case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;
        default:
        cout<<"Error! The operator is not correct";
        break;
    }
    return 0;
}