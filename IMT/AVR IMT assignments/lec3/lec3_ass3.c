#include <stdio.h>

void main() {
    int height, i, j, k;
    printf("Enter the height of the pyramid: "); scanf("%d", &height);
    for (i = 1; i <= height; i++) {
        for (j = i; j < height; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    
}