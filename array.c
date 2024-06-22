#include<stdio.h>
//#include<conio.h>
#define max 500
main(){
	int A[max];
	int i;
	
	for(i=0;i<max;i++)
	A[i]=rand()%100;
	
	for(i=0;i<max;i++)
	printf("%d\t",A[i]);
	
	return 0;
}
