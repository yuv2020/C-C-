#include<iostream>
using namespace std;
int main(){
	int x=6;
	int*p;
	p=&x;
	cout<<"the address of a variable"<<p<<endl;
	cout<<*p;
	cout<<x<<endl;
	cout<<&x;
}
