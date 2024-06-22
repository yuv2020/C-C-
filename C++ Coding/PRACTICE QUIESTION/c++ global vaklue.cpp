// Global variable.
#include<iostream>
using namespace std;

int glob=20;
void print(){
	cout<<"the global variable value is"<<glob;
	
}

int main(){
	print();
	glob=100;
	
	print();
}
