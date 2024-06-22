/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
     float p,r,t,ci,si;
    cout<<"Enter Principle, Rate and Time : ";
    cin>>p>>r>>t;
    si=(p*r*t)/100;
    ci=p*pow((1+r/100),t);
    cout<<"\nSimple Interest : "<<si;
    cout<<"\nCompound Interest : "<<ci;
    return 0;
}
