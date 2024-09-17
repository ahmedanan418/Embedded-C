#include<stdio.h>
void main (void){
	int id;
	int pw;
	printf("Enter your ID: "); scanf("%d",&id);
	switch(id){
		//*************************************************
		case 1234:
		printf("Enter your password: "); scanf("%d",&pw);
		if (pw==0000){
			printf("Hello Ahmed:)");
		}
		else{printf("Incorrect password");}
		break;
		//*************************************************
		case 1235:
		printf("Enter your password: "); scanf("%d",&pw);
		if (pw==1111){
			printf("Hello Mohamed:)");
		}
		else{printf("Incorrect password");}
		break;
		//*************************************************
		case 1236:
		printf("Enter your password: "); scanf("%d",&pw);
		if (pw==2222){
			printf("Hello Omar:)");
		}
		else{printf("Incorrect password");}
		break;
		//*************************************************
		case 1237:
		printf("Enter your password: "); scanf("%d",&pw);
		if (pw==3333){
			printf("Hello Youssef:)");
		}
		else{printf("Incorrect password");}
		break;
		//*************************************************
		default:
		printf("Incorrect ID");
		break;
		//*************************************************
	}
}