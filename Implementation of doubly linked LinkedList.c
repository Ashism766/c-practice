//I have to modify it ok 
#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};
struct Node* head=NULL;
head->prev=NULL;

struct  Node* GetNewNode(int x){
	struct Node* temp=(struct Node *)malloc(sizeof(struct Node));
	temp->data=x;
	return(temp);
}

void Insert(int x){
	struct Node* temp=GetNewNode(x);
	if(head==NULL){
		temp->next=head;
		temp->prev=head;
		head=temp;
	}
	
	temp->prev=head;
	temp->next=NULL;
	head=temp;
}
void printforward(){
	struct Node* temp=head;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void PrintBackward(){
	struct Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	while(temp!=NULL){
		printf(" %d ",temp->data);
		temp=temp->prev;
	}
	printf("\n");
}

int main(){
	Insert(2);Insert(4);Insert(5);Insert(54);Insert(32);
	printforward();
	PrintBackward();
	
	return 0;
}


