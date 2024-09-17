#include <stdio.h>

void main(void) {
    int array[10];
    int max;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    // Bubble sort
    int c;
    for (int i=0; i<10-1; i++) {
        for (int j=0; j<10-1-i; j++) {
            if (array[j] > array[j+1]) {
                c = array[j+1];
                array[j+1] = array[j];
                array[j] = c;
            }
        }
    }
printf("Maximum: %d\n",array[9]);
printf("Minimum: %d",array[0]);

}