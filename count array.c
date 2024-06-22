// Online C compiler to run C program online
#include<stdio.h>
//#include<conio.h>
#define max 50000
main(){
	int A[max]={1       ,7      ,4      ,0      ,9};
	int i;
	//fscanf(stdin,"%d",&A);
	
	for(i=0;i<max;i++)
	A[i]=rand()%10;
	
	for(i=0;i<max;i++)
	printf("%d\t,",A[i]);
	
	return 0;
}
