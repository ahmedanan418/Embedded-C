#include<stdio.h>
void main (void){
/*int x,m,y=1;
printf("Enter number: ");
scanf("%d",&x);
while(y<11){
	m=x*y;
	printf("%d*%d=%d\n",x,y,m);
	y++;
}

int x;
printf("4*3= ");
scanf("%d",&x);
while(x!=12){
	printf("Wrong Answer\nTry again: ");
	scanf("%d",&x);
}
printf("Answer is True");*/

int n,i;
int fact=1;
printf("Enter Number: ");
scanf("%d",&n);
for(i=1;i<n+1;i++){
	fact=fact*i;
}
printf("Factorial of %d=%d",n,fact);
}