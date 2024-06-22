#include<stdio.h>
void bubbleSort(int array[],int size){
	int i,j,temp;
	
for(i=0;i<size;i++){
	for(j=0;j<size-1;j++){
		if(array[j]>array[j+1]){
			//swap array[j] and array[j+1]
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
			
			
		}
	}
}
}

int main(){
	int array[]={5,2,8,12,1,6};
	int size=sizeof(array)/sizeof(array[0]);
	int i;
	printf("Original array: ");
	for(i=0;i<size;i++){
		printf("%d",array[i]);
	}
	
	bubbleSort(array,size);
	printf("\nSorted array: ");
	
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
		
	}
	return 0;
}
