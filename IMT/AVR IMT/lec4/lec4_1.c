#include<stdio.h>
void main(void){
	int n;
	printf("Enter number: "); scanf("%d",&n);
	for (int i=0;i<n;i++){
		for (int j=1;j<n+1;j++){
			printf("%d",j);
			if (j>i){
				break;
			}
		}
		printf("\n");
	}
}