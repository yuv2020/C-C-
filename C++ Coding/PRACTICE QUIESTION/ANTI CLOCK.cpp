#include<iostream>
#include<stdlib.h>

using namespace std;

main()
{
	int h=0, m=0, s=0;
	
	cout<<"Enter time in format HH:MM:SS\n\n";
	
	cin>>h>>m>>s;
	
	start:
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{
				// THIS WILL CLEAR ALL DATA ON SCREEN.
				system("CLS");
				cout<<h<<" : "<<m<<" : "<<s;
				//THIS WILL KEEP STOP THE LOOP FOR 1 SEC.
				for(double i=0; i<9999999li++)
				{
					i++;
					i--;
				}
			}
			s=0;
		}
		m=0;
	}
	h=0;
	// this will never stop the loop.
	goto start:
}
