/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int val1;
    int val2;
    int val3;
    cout<<"Please enter your 3 numbers:";
    cin>>val1>>val2>>val3;
 
    cout<<"\nYour numbers forward:\n";
    cout<<val1<< "\n"<<val2<<"\n" <<val3<<"\n";
    cout<< "Your numbers reversed:\n";
    cout<<val3<<"\n"<<val2 <<"\n"<<val1<<"\n";
   
 system("PAUSE");
    return EXIT_SUCCESS;

}
