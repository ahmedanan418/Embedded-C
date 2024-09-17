#include<stdio.h>
int num_1, num_2;
void swap(int num_1,int  num_2);

void main (void){
	printf("Enter First number: "); scanf("%d",&num_1);
	printf("Enter Second number: "); scanf("%d",&num_2);
	swap(num_1,num_2);
}

void swap(int num_1, int num_2){
	int x;
	x=num_1;
	num_1=num_2;
	num_2=x;
	printf("New numbers are\nFirst number: %d\nSecond number: %d",num_1,num_2);
}