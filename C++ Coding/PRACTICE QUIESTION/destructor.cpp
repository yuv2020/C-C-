/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class demo
{
    private:
    int num1,num2;
    public:
    demo(int n1, int n2)
    {
        cout<<"Inside constructors"<<endl;
        num1=n1;
        num2=n2;
    }
    void display()
    {
        cout<<"num1="<<num1<<endl;
        cout<<"num2="<<num2<<endl;
        
    }
    demo()
    {
        cout<<"Inside Destructor:";
        
    }
};
    int main()
    {
        demo obj1(10,20);
        obj1.display();
        return 0;
        
    }

