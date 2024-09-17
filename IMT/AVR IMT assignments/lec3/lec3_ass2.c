#include <stdio.h>

void main(void) {
    int x, pw;
    printf("Enter your ID: "); scanf("%d", &x);
    switch (x) {
        case 1234:
            for (int i = 0; i < 3; i++) {
                printf("Enter your password: ");scanf("%d", &pw);
                if (pw == 7788) {
                    printf("Welcome Ahmed\n");
                    break;
                } 
                if (i==2){
					printf("No more tries");
				}
            }
        break;
			
		case 5678:
            for (int i = 0; i < 3; i++) {
                printf("Enter your password: ");scanf("%d", &pw);
                if (pw == 5566) {
                    printf("Welcome Amr\n");
                    break;
                } 
                if (i==2){
					printf("No more tries");
				}
            }
        break;
		
		case 9870:
            for (int i = 0; i < 3; i++) {
                printf("Enter your password: ");scanf("%d", &pw);
                if (pw == 1122) {
                    printf("Welcome Wael\n");
                    break;
                } 
                if (i==2){
					printf("No more tries");
				}
            }
        break;
			
        default:
            printf("You are not registered!\n");
            break;
    }
    
}