//Inserting a element at the Nth position in linked list; 
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	Node*next;
};

Node*head=NULL;

void InsertNode(int x, int pos){
	Node*temp=(Node*)malloc(sizeof(Node));
	temp->data=x;temp->next=NULL;
	int i;
	if(pos==1){//cornar case;
		temp->next=head;
		head=temp;
		return;
	}
	Node*temp2=head;
	for(i=0;i<pos-2;i++){//(position-2)times loop must be go;
		temp2=temp2->next;
	}
	temp->next=temp2->next;
	temp2->next=temp;
	
	
}

void print(){
	if(head==NULL){
	printf("Linked list is NULL");return;}//this bracket look out for this mistake can make you mad;
	
	Node*temp=head;//Node*temp=*head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	
}

int main(){
	int i,j;
	InsertNode(3,1);
	InsertNode(4,2);
	InsertNode(1,3);InsertNode(2,4);InsertNode(6,5);InsertNode(5,2);InsertNode(4,5);
	print();
	return 0;
}

