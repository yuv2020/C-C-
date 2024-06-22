// Online C compiler to run C program online
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define max 10
main(){
	int A[max];
	int i,j,t;
	time_t t1,t2;
	int n=max;
	for(i=0;i<max;i++)
	A[i]=rand()%100;
	
	for(i=0;i<n-1;i++)
	for(j=0;j<n-1-i;j++)
	
	t1=clock();
	if(A[j]>A[j+1])
	{
	    t=A[j];
	    A[j]=A[j+1];
	   A[j+1]=t;
	    
	}

	t2=clock();
	printf("time=%ld",t2-t1);
	
	for(i=0;i<max;i++)
	printf("%d\t",A[i]);
	
	return 0;
}
