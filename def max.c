// Online C compiler to run C program online
#include<stdio.h>
//#include<conio.h>
#define max 50000
main(){
	int A[max];
	int i;
	
	for(i=0;i<max;i++)
	A[i]=i+1;
	
	for(i=0;i<max;i++)
	printf("%d",A[i]);
	
	return 0;
}
