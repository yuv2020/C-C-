#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"enter your age for registration";
	cin>>age;
	if(age>=110 || age<1){
		cout<<"Invalid for  registration";
		
	}
	else if(age>=18){
		cout<<"You are  eligible";
	}
	else{
		
		cout<<"not eligible";
	}
}
