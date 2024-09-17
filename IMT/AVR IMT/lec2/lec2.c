#include <stdio.h>
void main(void){
int grade;
printf("Please enter number: "); scanf("%d",&grade);
if ((grade>=85)&&(grade<100)){printf("Your rating is Excellent");}
else if ((grade>=75)&&(grade<85)){printf("Your rating is Very Good");}
else if ((grade>=65)&&(grade<75)){printf("Your rating is Good");}
else if ((grade>=50)&&(grade<65)){printf("Your rating is Normal");}
else if ((grade>=0)&&(grade<50)){printf("Your rating is Failed");}
else {printf("Enter a valid grade");}
}