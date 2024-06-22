/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

//declare a class.
class wall{
    private:
    double length;
    public:
    wall()
    {
        length=5.5;
        cout<<"creating a wall"<<endl;
        cout<<"length="<<length<<endl;
    }
};
    
    
    int main()
    {
        wall wall1;
        return 0;
    }



