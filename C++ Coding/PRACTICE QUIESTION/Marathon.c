/*Distance of a marathon in yards*/

#include<stdio.h>

int main(void)
{
	int miles = 26, yards = 385;
	double kilometers;
	
	kilometers = 1.609 * (miles + yards/176.0);
	printf("\nA marathon is %lf kilometers.\n", kilometers);
	
	return 0;
	
}
