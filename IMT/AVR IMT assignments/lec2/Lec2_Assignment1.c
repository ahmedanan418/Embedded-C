#include<stdio.h>
void main (void){
	int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
	int a=1;int b=2;int c=3;int d=4;int e=5;
	int f=6;int g=7;int h=8;int i=9;int j=10;
	printf("Enter number %d: ",a);scanf("%d",&x1);
	printf("Enter number %d: ",b);scanf("%d",&x2);
	printf("Enter number %d: ",c);scanf("%d",&x3);
	printf("Enter number %d: ",d);scanf("%d",&x4);
	printf("Enter number %d: ",e);scanf("%d",&x5);
	printf("Enter number %d: ",f);scanf("%d",&x6);
	printf("Enter number %d: ",g);scanf("%d",&x7);
	printf("Enter number %d: ",h);scanf("%d",&x8);
	printf("Enter number %d: ",i);scanf("%d",&x9);
	printf("Enter number %d: ",j);scanf("%d",&x10);
	int y;
	printf("Enter the value to search: "); scanf("%d",&y);
	if (y==x1){
		printf("Value exists at element number %d",a);
	}
	else if (y==x2){
		printf("Value exists at element number %d",b);
	}
	else if (y==x3){
		printf("Value exists at element number %d",c);
	}
	else if (y==x4){
		printf("Value exists at element number %d",d);
	}
	else if (y==x5){
		printf("Value exists at element number %d",e);
	}
	else if (y==x6){
		printf("Value exists at element number %d",f);
	}
	else if (y==x7){
		printf("Value exists at element number %d",g);
	}
	else if (y==x8){
		printf("Value exists at element number %d",h);
	}
	else if (y==x9){
		printf("Value exists at element number %d",i);
	}
	else if (y==x10){
		printf("Value exists at element number %d",j);
	}
	else{
		printf("Value does not exist");
	}
	
}