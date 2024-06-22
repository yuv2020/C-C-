#include<stdio.h>
int reverseNumber(int num){
	int reversedNum=0;
	
	while(num !=0){
		int remainder=num%10;
		reversedNum=reversedNum*10+remainder;
		num/=10;
		
	}
	return reversedNum;
}

int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	
	int reversedNumber = reverseNumber(number);
	
	printf("Reversed number: %d\n", reversedNumber);
	return 0;
}
