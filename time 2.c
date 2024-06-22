#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#define max 50000
main()
{
	int i,j,t, n=max;
	int A[max];
	
	//clock_t t1,t2;
	for(i=0;i<max;i++)
	A[i]=rand()%100;
	//scanf("%d",&A[i]);
	
	for(i=0;i<n;i++)
	for(j=0;j<n-1-i;j++)
	if(A[j]>A[j+1])
	{
		t=A[j];
		A[j]=A[j+1];
		A[j+1]=t;
	}
	
	//t2=time(NULL);
	//t2=clock();
	for(i=0;i<n;i++)
	printf("%d\t",A[i]);
	//printf("%d",t2-t1);
	
	return 0;
	
	
}

