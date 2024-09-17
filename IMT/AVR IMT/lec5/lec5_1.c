#include<stdio.h>

/*void main (void){
	int array[10];
	for (int i=0;i<10;i++){
		scanf("%d",&array[i]);
	}
	for (int i=9;i>=0;i--){
		printf("%d ",array[i]);
	}
}*/

void main (void){
	int sum=0;
	float avg=0;
	int array[10];
	for (int i=0;i<10;i++){
		scanf("%d",&array[i]);
		sum=sum+array[i];
		
	}
	avg=(float)sum/10;
	printf("Sum= %d\n",sum);
	printf("Average= %.2f\n",avg);
	
	for (int i=0;i<10;i++){
		printf("%d ",array[i]);
	}
}

