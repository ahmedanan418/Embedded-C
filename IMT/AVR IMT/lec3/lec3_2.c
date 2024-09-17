#include<stdio.h>
void main(void){
	int z=0;
	float m;
	for(int x=0;x<10;x++){
		int y;
		printf("Enter number: ");
		scanf("%d",&y);
		z=z+y;
	}
	m=(float)z/10;
	printf("Average: %.2f",m);
}