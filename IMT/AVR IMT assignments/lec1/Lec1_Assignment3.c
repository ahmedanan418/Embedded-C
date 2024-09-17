#include<stdio.h>
void main (void){
	int a,b;
	printf("Enter number a: ");scanf("%d",&a);
	printf("Enter number b: ");scanf("%d",&b);
	int c,d,e,f,g;
	c= a+b;
	d= a-b;
	e= a&b;
	f= a|b;
	g= a^b;
	printf("a+b= %d\n",c);
	printf("a-b= %d\n",d);
	printf("a&b= %d\n",e);
	printf("a|b= %d\n",f);
	printf("a^b= %d\n",g);
}