
#include<stdio.h>
int main(void)
{
	int fahreneit, celsius;
	
	printf("Please enter fahreneit as an integer:");
	scanf("%d", &fahreneit);
	celsius = (fahreneit -32)/1.8;
	printf("\n %d fahreneit is %d celsius.\n",fahreneit, celsius);
	
	return 0;
}
