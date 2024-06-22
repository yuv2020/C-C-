#include<iostream>
using namespace std;
class num
{
    private:
    int a,b,c;
    public:
    num(int j,int k,int m)
    {
        a=j;b=k;c=m;
    }
    void show(void);
    void operator ++( );
};
void num::show()
{
    cout<<"\n a= "<<a<<"\n b= "<<b<<"\n c= "<<c;
}
void num::operator ++( )
{
    ++a;
    ++b;
    ++c;
}
int main()
{
    num n(13,63,241);
    n.show();
    ++n;
    n.show();
}
