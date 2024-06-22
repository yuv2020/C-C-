# include <iostream>
using namespace std;

int main()
{
	int number;
	cout<<"Enter an integer:"<<endl;
	cin>>number;
	
	//checks whether the no. is +ve or not.
	if(number>0)
	{
		cout<<"You entered a positive number:"<<number<<endl;
	}
	
	cout<<"This statement is always executed:";
	
	return 0;
	
}
