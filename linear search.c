#include<stdio.h>
#include<conio.h>
#define max 100
int A[max];
main()
{
	int n,i,j,key;
	printf("Enter no. of values?");
	scanf("%d",&n);
	printf("Enter values:");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	
	for(j=0;j<n;j++){
	    key=A[j];
		i=j-1;
		while(i>=0 && key<A[i])
		{
			A[i+1]=A[i];
		    i=i-1;
			
		}
		A[i+1]=key;
	}
	for(i=0;i<n;i++)
	printf("%d\t",A[i]);
}
