#include<stdio.h>

/*void main (void){
	
	//Linear search
	
	int array[10];
	int x;
	int count=0;
	
	for (int i=0;i<10;i++){
		scanf("%d",&array[i]);
	}
	while(1){
	printf("enter element to search: "); scanf("%d",&x);
	
	for (int i=0;i<10;i++){
		if (array[i]==x){
			count=count+1;
			}
		else {}
	}
	printf("Count= %d\n",count);
	count=0;
}
}

void main (void){
	
	//Bubble sort
	int array[4]={9,5,7,2};
	int cont;
	for (int i=0;i<4-1;i++){
		for (int j=0;j<4-1-i;j++){
			if (array[j]>array[j]){
				cont=array[j+1];
				array[j+1]=array[j];
				array[j]=cont;
			}
			else{}
		}
	}
	for (int i=0;i<4;i++){
		printf("%d ",array[i]);
	}
}

void main(void){
	
	//Binary search
	int low,high,med;
	int ele;
	int array_1[9]={2,10,16,17,20,22,25,30,60};
	high=8;
	low=0;
	
	printf("Enter element to search: ");scanf("%d",&ele);
	
	while(high>=low){
		med= (high+low)/2;	
		if(array_1[med]==ele){
			printf("Found in index %d",med);
			break;
		}
		else if(array_1[med]>ele){
			high=med-1;
		}
		else{
			low=med+1;
		}
		}
		if (low>high){
			printf("Element not found!\n");
		}
	
}
*/

