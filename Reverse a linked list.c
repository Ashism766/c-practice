//It's ok 
//reverse a linked list

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
struct Node* head =NULL;//using head as a global variable

void Insert(int x){
	struct Node* temp=(struct Node* )malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}

void print(){
	struct Node* temp=head;
	while(temp!=NULL){
		printf(" %d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void reverseLinkedList(){
	struct Node* current=head;
	struct Node* Prev; struct Node* Next;
	Prev=NULL;
	while(current!=NULL){
		Next=current->next;
		current->next=Prev;
		Prev=current;
		current=Next;
	}
	head=Prev;
}
int main(){
	Insert(2);Insert(4);Insert(5);Insert(54);Insert(32);
	
	print();
	
	reverseLinkedList();
	print();
	return 0;
}
