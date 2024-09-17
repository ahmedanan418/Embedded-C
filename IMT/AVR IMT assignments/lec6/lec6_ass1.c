#include<stdio.h>
/*void bubble_sort(int *ptr);

void main (void){
	int array[4];
	for (int i=0;i<4;i++){
		scanf("%d",&array[i]);
	}
	bubble_sort(array);
}

void bubble_sort(int *ptr){
	int cont;
	for (int i=0;i<4-1;i++){
		for (int j=0;j<4-1-i;j++){
			if (ptr[j]>ptr[j+1]){
				cont=ptr[j+1];
				ptr[j+1]=ptr[j];
				ptr[j]=cont;
			}
			else{}
		}
	}
	for (int i=0;i<4;i++){
		printf("%d ",ptr[i]);
	}
}*/
#include <stdlib.h>

int randArray[4];

void loop() {
  // put your main code here, to run repeatedly:
for (int i=0;i<4;i++){
  randArray[i]=rand(1,5);
}
for (int j=0;j<4;j++){
	printf("%d",randArray[j]);
}
}














