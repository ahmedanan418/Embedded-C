#include<stdio.h>


/*#include "../file3.h"
#include "file1/file1.h"
void main (void){

	printf("%d %d",x,y);

}*/

#define setBit(var,bitno) var |= (1<<bitno)
#define clrBit(var,bitno) var &= ~(1<<(bitno))
#define toggleBit(var,bitno) var ^= (1<<(bitno))