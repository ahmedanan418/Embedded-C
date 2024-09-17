#include<stdio.h>
int fact(int f);

void main(void){
	int num;
	printf("Please enter number: ");scanf("%d",&num);
	printf("Result=%d",fact(num));
}

int fact(int f){
	if (f==0){
		return 1;
	}
	else{
		return f*fact(f-1);
	}
}





