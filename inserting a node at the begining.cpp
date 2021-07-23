//inserting a node at the beginnig
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	Node*next;
};

Node*head=NULL;

void InsertNode(int x){
	Node*temp=(Node*)malloc(sizeof(Node));
	temp->data=x;
	    temp->next=head;
		head=temp;
}
//or

/*void Insert(Node**head){
       Node*temp=(Node*)malloc(sizeof(Node));
       temp->next=*(head);
       temp->data=x;
       head=temp;
     
*/

void print(/* Node**head*/){
	Node*temp=head;//Node*temp=*head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}

int main(){
	int i,j;
	for(i=1;i<10;i++){
		printf("%d\n",i);
		InsertNode(i);
	}printf("\n");
	print();
	return 0;
}

/* INPUT 1 2 3 
OUTPUT 3 2 1
*/




















