#include<stdio.h>
int num1,num2,num3,num4;
void max(int num1,int num2,int num3,int num4);
void min(int num1,int num2,int num3,int num4);

void main(void){
	printf("Enter 1st number: ");scanf("%d",&num1);
	printf("Enter 2nd number: ");scanf("%d",&num2);
	printf("Enter 3rd number: ");scanf("%d",&num3);
	printf("Enter 4th number: ");scanf("%d",&num4);
	max(num1,num2,num3,num4);
	min(num1,num2,num3,num4);
}

void max(int num1,int num2,int num3,int num4){
	if ((num1>num2)&&(num1>num3)&&(num1>num4)){
		printf("Maximum is %d\n",num1);
	}
	else if((num2>num1)&&(num2>num3)&&(num2>num4)){
		printf("Maximum is %d\n",num2);
	}
	else if((num3>num2)&&(num3>num1)&&(num3>num4)){
		printf("Maximum is %d\n",num3);
	}
	else if((num4>num2)&&(num4>num3)&&(num4>num1)){
		printf("Maximum is %d\n",num4);
	}
}

void min(int num1,int num2,int num3,int num4){
	if ((num1<num2)&&(num1<num3)&&(num1<num4)){
		printf("Minimum is %d\n",num1);
	}
	else if((num2<num1)&&(num2<num3)&&(num2<num4)){
		printf("Minimum is %d\n",num2);
	}
	else if((num3<num2)&&(num3<num1)&&(num3<num4)){
		printf("Minimum is %d\n",num3);
	}
	else if((num4<num2)&&(num4<num3)&&(num4<num1)){
		printf("Minimum is %d\n",num4);
	}
}




















