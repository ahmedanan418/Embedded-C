#include<stdlib.h>
#include<stdio.h>

/*	
void main (void){
	int *ptr;
	int x;
	printf("Enter Number of numbers: ");
	scanf("%d",&x);
	ptr=(int*)malloc(x*sizeof(int));
	
	for (int i=0;i<x;i++)
	{
		printf("Please enter number %d: ",i+1);scanf("%d",&ptr[i]);
	}
	int cont;
	for (int m=0;m<x-1;m++){
		for (int j=0;j<x-1-m;j++){
			if (ptr[j]>ptr[j+1]){
				cont=ptr[j+1];
				ptr[j+1]=ptr[j];
				ptr[j]=cont;
			}
			else{}
		}
	}
	for (int n=0;n<x;n++){
		printf("%d ",ptr[n]);
	}
}	
*/
typedef struct node{
	int data;
	struct node*next;
}node_t;
node_t*head=NULL;
int value;


void main (void){

	int len=0;
	int x;
	
	while(x!=2){
	printf("To add node enter 0\n");
	printf("To print the linked list enter 1\n");
	printf("To exit enter 2\n");
	scanf("%d",&x);
	switch(x){
		case 0:
		printf("Add value: ");scanf("%d",&value)
		if (len==0){
			head=(node_t*)malloc(sizeof(node_t));
			head-> data=value;
			head->next=NULL;
		}
		else if(len>0){
			node_t*new;
			new=(node_t*)malloc(sizeof(node_t));
			new->data=value;
			new->next=NULL;
			node_t*ptr=head;
			while(ptr->next!=NULL){
				ptr=ptr->new;
			}
			ptr->next=new;
		}
		else{}
		len++;
		break;
		case 1:
		break;
		case 2:
		printf("Good bye");
		break;
		default:
		printf("Invalid choice try again\n");
		break;
	}
	}
	
}

