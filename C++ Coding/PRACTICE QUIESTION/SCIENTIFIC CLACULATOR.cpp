# include <iostream>
using namespace std;

int main()
{
	double var1, var2;
	
	beginning:
		system("cls");
		
	
	cout<<"Enter first number:"<<endl;
	cin>>var1;
	
	cout<<"Enter second number:"<<endl;
	cin>>var2;
	
	cout<<"What is your choice ?"<<endl;
	cout<<"+ - add"<<endl;
	cout<<"- - difference"<<endl;
	cout<<"* - multiplication"<<endl;
	cout<<"/ - division"<<endl;
	
	char decision;
	
	cin>>decision;
	
	system ("cls");
	
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
			if (var2) //var2!=0
		    cout<<var1<<"/"<<var2<<"="<<(var1/var2)<<endl;
		    else
		        cout<<"you can't divide by 0"<<endl;
		    break;
		    
		default:
			cout<<"You typed wrong character";
			
			     
	}
	
	char decision2;
	
	cout<<"Do you want to continue that program? (Y/N)" << endl;
	cin>>decision2;
	
	if (decision2 == 'y' || decision2 == 'Y')
	goto beginning;
	
	
}
