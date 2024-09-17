#include<stdio.h>
#include"head.h"


void main (void){
	int m,n,i;
	printf("First Number: "); scanf("%d",&m);
	printf("Second Number: "); scanf("%d",&n);
	i=mult(m,n);
	printf("Result: %d",i);
}


