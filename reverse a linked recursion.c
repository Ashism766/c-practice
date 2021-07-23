//this is the correct solution of the problem 
//reverse a linked list using recursion
//There is two different ways 
#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

void Insert(int x,struct Node** hpointer){
	struct Node* temp=(struct Node* )malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=*hpointer;
	*hpointer=temp;
}

void print(struct Node** head){
	struct Node* temp=*head;
	while(temp!=NULL){
		printf(" %d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void recursion(struct Node* temp,struct Node** head){
	if(temp->next==NULL){
		*head=temp;
		return;
	}
	recursion(temp->next,head);//there might be an error
	struct Node* q=temp->next;
	q->next=temp;
	temp->next=NULL;

}

int main(){
	struct Node* head=NULL;
	Insert(2,&head);Insert(4,&head);Insert(5,&head);Insert(54,&head);Insert(32,&head);
	
	print(&head);
	
	recursion(head,&head);
	print(&head);
	
	
	
	return 0;
}

 /*
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

void recursion(struct Node* temp){
	if(temp->next==NULL){
		head=temp;
		return;
	}
	recursion(temp->next);//there might be an error
	struct Node* q=temp->next;
	q->next=temp;
	temp->next=NULL;

}

int main(){
	
	Insert(2);Insert(4);Insert(5);Insert(54);Insert(32);
	
	print();
	
	recursion(head);
	print(&head);
	
	
	
	return 0;
}
*/

	
    
