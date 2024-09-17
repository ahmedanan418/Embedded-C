#include<stdio.h>
void sort(int array[]);

void main (void){
	int class_1[10]={90,84,54,26,70,61,96,100,99,88};
	int class_2[10]={91,44,58,76,79,28,96,100,99,34};
	int class_3[10]={100,94,74,50,70,31,59,100,89,88};
////////////////////////////////////////////////////////////////
	//Class 1
	printf("For Class 1\n");
	int pass_1=0;
	int fail_1=0;
	int sum=0;
	float avg=0;
	// Bubble sort
	sort(class_1);
	//passed and failed
	for (int i=0;i<10;i++){
		if (class_1[i]<50){
			fail_1=fail_1+1;
		}
		else{
			pass_1=pass_1+1;
		}
	}
	printf("Number of passed students: %d\n",pass_1);
	printf("Number of failed students: %d\n",fail_1);
	//Highest and lowest grade
	printf("Highest grade: %d\n",class_1[9]);
	printf("Lowest grade: %d\n",class_1[0]);
	//Average
	for (int i=0;i<10;i++){
		sum=sum+class_1[i];	
	}
	avg=(float)sum/10;
	printf("Average= %.2f\n",avg);
//////////////////////////////////////////////////////////////////	
	//Class 2
	printf("For Class 2\n");
	int pass_2=0;
	int fail_2=0;
	int sum_2=0;
	float avg_2=0;
	int c_2;
	// Bubble sort
	sort(class_2);
	//passed and failed
	for (int i=0;i<10;i++){
		if (class_2[i]<50){
			fail_2=fail_2+1;
		}
		else{
			pass_2=pass_2+1;
		}
	}
	printf("Number of passed students: %d\n",pass_2);
	printf("Number of failed students: %d\n",fail_2);
	//Highest and lowest grade
	printf("Highest grade: %d\n",class_2[9]);
	printf("Lowest grade: %d\n",class_2[0]);
	//Average
	for (int i=0;i<10;i++){
		sum_2=sum_2+class_2[i];	
	}
	avg_2=(float)sum_2/10;
	printf("Average= %.2f\n",avg_2);
/////////////////////////////////////////////////////////////////////
	//Class 3
	printf("For Class 3\n");
	int pass_3=0;
	int fail_3=0;
	int sum_3=0;
	float avg_3=0;
	int c_3;
	// Bubble sort
    sort(class_3);
	//passed and failed
	for (int i=0;i<10;i++){
		if (class_3[i]<50){
			fail_3=fail_3+1;
		}
		else{
			pass_3=pass_3+1;
		}
	}
	printf("Number of passed students: %d\n",pass_3);
	printf("Number of failed students: %d\n",fail_3);
	//Highest and lowest grade
	printf("Highest grade: %d\n",class_3[9]);
	printf("Lowest grade: %d\n",class_3[0]);
	//Average
	for (int i=0;i<10;i++){
		sum_3=sum_3+class_3[i];	
	}
	avg_3=(float)sum_3/10;
	printf("Average= %.2f\n",avg_3);
}

void sort(int array[]){
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
	
}































