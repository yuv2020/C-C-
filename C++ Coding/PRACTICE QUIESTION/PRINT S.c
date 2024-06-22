#include<stdio.h>
#include<conio.h>
int main(){
	int i, j;
	printf("\n");
	for(i=1;i<=13;i++){
		printf(" ");
		for(j=1; j<=7; j++){
			(i<7&&j==1 || i==1 || i==7 || j==7&&i>7 || i==13)?printf("S "):printf(" ");
			
			
		}
		printf("\n");
	}
	
}
