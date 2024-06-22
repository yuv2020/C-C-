#include<iostream>
using namespace std;

int main()
{
	double var1, var2;
	
	beginning:
		system("cls");
		
		
		
		cout<<"Enter your first number:"<<endl;
		cin>>var1;
		
		cout<<"Enter your second number:"<<endl;
		cin>>var2;
		
		cout<<"Enter your choice:"<<endl;
		cout<<"1. - Addition"<<endl;
		cout<<"2. - Subtraction"<<endl;
		cout<<"3. - Multiplicaton"<<endl;
		cout<<"4. - Division"<<endl;
		
		char decision;
		
		cin>>decision;
		
		system("cls");
		
		switch(decision)
		
		{
			case '+':
				cout<<var1<<"+"<<var2<<"="<<(var1+var2)<<endl;
				break;
				
			case '-':
				cout<<var1<<"-"<<var2<<"="<<(var1-var2)<<endl;
				break;
				
			case '*':
				cout<<var1<<"*"<<var2<<"="<<(var1*var2)<<endl;
				break;
				
			case '/':
				cout<<var1<<"/"<<var2<<"="<<(var1/var2)<<endl;
				break;
				
			return 0;
				
			
		}
		
	
}
