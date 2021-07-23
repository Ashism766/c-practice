#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int data;
	Node*next;
};
typedef struct Node Node;
void InsertNode(int x,int pos,Node**headptr){
	printf("entering in the function\n");
	Node*temp=(Node*)malloc(sizeof(Node));
	temp->data=x;
	temp->next=NULL;
	
	if(*headptr==NULL){
		*headptr=temp;return;
	}
	
	
	Node*temp2=*headptr;int i=0;
	for(i;i<pos-2;i++){
		temp2=temp2->next;
	}
	temp=temp2->next;
	temp2->next=temp;
	
}

void print(Node**hptr){printf("calling function\n");
	if(*hptr==NULL){
	printf("Linked list is NULL");return;}//this bracket look out for this mistake can make you mad;
	
	Node*temp=*hptr;//Node*temp=*head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	
}

void DeleteNode(int pos,Node**headp){
	Node*temp=*headp;
	if(pos==1){
	
		*headp=(*headp)->next;
		free(temp);return;
	}
	Node*temp2;int i=0;
	for(i=0;i<pos-2;i++){
		temp=temp->next;
	}
	temp2=temp;
	printf("deleting %d at %d position\n",temp->data,pos);
	temp=(temp->next)->next;
	free(temp2);
}

int main(){
	Node*head=NULL;
	InsertNode(3,1,&head);
	InsertNode(4,2,&head);
	InsertNode(1,3,&head);InsertNode(2,4,&head);InsertNode(6,5,&head);InsertNode(5,2,&head);
	
	
	print(&head);
	
	DeleteNode(2,&head);print(&head);
	DeleteNode(2,&head);print(&head);
	DeleteNode(2,&head);print(&head);
	

	return 0;
}

