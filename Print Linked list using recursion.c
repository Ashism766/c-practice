//Its Ok
// Printing Linked List using recursion
//Also Reverse Print Linked List using recursion
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};

struct Node* head= NULL;

void Insert(int x){
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;temp->next=head;
	head=temp;
}

/*void Print(){
	struct Node* temp=head;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}*/

void RecursionPrint(struct Node* temp){
	//printf(" %d ",temp->data); give this statement here to print it in reverse 
	if(temp==NULL){
		return;
	}
	RecursionPrint(temp->next);
	printf(" %d ",temp->data);//If you give print statement here it'll print Linked;
}

int main(){
	
	Insert(2);Insert(4);Insert(5);Insert(54);Insert(32);
	RecursionPrint(head);
	return 0;
}


