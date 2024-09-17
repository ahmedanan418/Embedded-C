#include<stdio.h>
//One operand
int not(int x); int inc(int x); int dec(int x);
//Two operand
int add(int x,int y); int sub(int x,int y); 
int mult(int x,int y); float div(float x,float y);
int and(int x,int y); int or(int x,int y); 
int xor(int x,int y); int rem(int x,int y);



void main(void){
	int num_1,num_2,res,op,op_id;
	float num_11,num_21,res_1;
	printf("One or two operands?\n");scanf("%d",&op);
	switch(op){
		case 1:
		printf("Enter operation ID: ");scanf("%d",&op_id);
		switch(op_id){
			case 7:
			printf("Enter number: ");scanf("%d",&num_1);
			res=not(num_1);
			printf("Result= %d",res);
			break;
		/*****************************************************/	
			case 10:
			printf("Enter number: ");scanf("%d",&num_1);
			res=inc(num_1);
			printf("Result= %d",res);
			break;
		/****************************************************/	
			case 11:
			printf("Enter number: ");scanf("%d",&num_1);
			res=dec(num_1);
			printf("Result= %d",res);
			break;
		/***************************************************/	
			default:
			printf("Invalid operation ID");
			break;
		}
		break;
	
		case 2:	
		printf("Enter operation ID: ");scanf("%d",&op_id);
		switch(op_id){
			case 1:
			printf("Enter first number: ");scanf("%d",&num_1);
			printf("Enter second number: ");scanf("%d",&num_2);
			res=add(num_1,num_2);
			printf("Result= %d",res);
			break;
		/****************************************************/	
			case 2:
			printf("Enter first number: ");scanf("%d",&num_1);
			printf("Enter second number: ");scanf("%d",&num_2);
			res=sub(num_1,num_2);
			printf("Result= %d",res);
			break;
		/****************************************************/	
			case 3:
			printf("Enter first number: ");scanf("%d",&num_1);
			printf("Enter second number: ");scanf("%d",&num_2);
			res=mult(num_1,num_2);
			printf("Result= %d",res);
			break;
		/****************************************************/	
			case 4:
			printf("Enter first number: ");scanf("%f", &num_11);
			printf("Enter second number: ");scanf("%f", &num_21);
			res_1 = div(num_11, num_21);
			printf("Result = %.2f\n", res_1);
			break;
		/****************************************************/	
			case 5:
			printf("Enter first number: ");scanf("%d",&num_1);
			printf("Enter second number: ");scanf("%d",&num_2);
			res=and(num_1,num_2);
			printf("Result= %d",res);
			break;
		/****************************************************/	
			case 6:
			printf("Enter first number: ");scanf("%d",&num_1);
			printf("Enter second number: ");scanf("%d",&num_2);
			res=or(num_1,num_2);
			printf("Result= %d",res);
			break;
		/****************************************************/	
			case 8:
			printf("Enter first number: ");scanf("%d",&num_1);
			printf("Enter second number: ");scanf("%d",&num_2);
			res=xor(num_1,num_2);
			printf("Result= %d",res);
			break;
		/****************************************************/	
			case 9:
			printf("Enter first number: ");scanf("%d",&num_1);
			printf("Enter second number: ");scanf("%d",&num_2);
			res=rem(num_1,num_2);
			printf("Result= %d",res);
			break;
		/****************************************************/	
			default:
			printf("Invalid operation ID");
			break;
		}
		break;
	
		default:
		printf("Only one or two operands are allowed!");
		break;
	}
}


//One operand operation functions
int not(int x){int m;m=~x;return m;}
int inc(int x){x=x+1;return x;}
int dec(int x){x=x-1;return x;}


//Two operand operation functions
int add(int x,int y){int m;m=x+y;return m;}
int sub(int x,int y){int m;m=x-y;return m;}
int mult(int x,int y){int m;m=x*y;return m;}
float div(float x, float y) {
    float m = x / y;
    return m;
}
int and(int x,int y){int m;m=x&y;return m;}
int or(int x,int y){int m;m=x|y;return m;}
int xor(int x,int y){int m;m=x^y;return m;}
int rem(int x,int y){int m;m=x%y;return m;}	
