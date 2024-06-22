//Program to check the smallest no.
#include<stdio.h>
int findsmallest(int num1,int num2,int num3){
	int smallest=num1;
	
	if(num2<smallest){
		smallest=num2;
	}
	if(num3<smallest){
		smallest=num3;
		
	}
	return smallest;
	
}

int main(){
	int number1,number2,number3;
	printf("Enter the number to check the smallest digit: ");
	scanf("%d%d%d",&number1,&number2,&number3);
	
	printf("The smallest number is: %d\n ",findsmallest(number1,number2,number3));
	
	return 0;
}

