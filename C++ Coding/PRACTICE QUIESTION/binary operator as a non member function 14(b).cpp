#include<iostream>
using namespace std;
class FBOP
{
    int x,y;
    public:
    FBOP(){   }
    FBOP(int a,int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<"= "<<x<<"\t y= "<<y<<endl;
    }
    friend FBOP operator+(FBOP ob1,FBOP ob2);
};
FBOP operator+(FBOP ob1,FBOP ob2)
{
    FBOP temp;
    temp.x=ob1.x+ob2.x;
    temp.y=ob1.y+ob2.y;
    return temp;
}
int main()
{
    int a,b;
    cout<<"Enter first object values:\n";
    cin>>a>>b;
    FBOP ob1(a,b);
    cout<<"Enter second object values:\n";
    cin>>a>>b;
    FBOP ob2(a,b),ob3;
    ob3=ob1+ob2;
    cout<<"Values of first object are:\n";
    ob1.show();
    cout<<"Values of second object are:\n";
    ob2.show();
    cout<<"Addition of two objects is:\n";
    ob3.show();
}
