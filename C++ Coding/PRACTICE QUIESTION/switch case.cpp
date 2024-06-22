#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age";
	cin>>age;
	switch(age){
		case 18:
			cout<<"You are elligible for vaccination";
			break;
		case 15:
			cout<<"You are elligible for vaccination";
			break;
		case 16:
			cout<<"You are not elligible for vaccination";
			break;
			
		case 19:
			cout<<"You are elligible for vaccination";
			break;
		default:
			cout<<"Person";
			break;
			
	}
}

