#include<iostream>
#include<stdlib.h>
using namespace std;

void add_at_end(struct node *head, int data);

struct node{
	int data;
	struct node *link;
};

int main(){
	struct node *head=(struct node *)malloc(sizeof(struct node));
	head->data=98;
	head->link=NULL;
	
	struct node *current=(struct node *)malloc(sizeof(struct node));
	current->data=45;
	current->link=Null;
	head->link=current;
	
	current=(struct node *)malloc(sizeof(struct node));
	current->data=3;
	current->link=NULL;
	head->link->link=current;
	
	add_at_end(head,67);
	
	return 0;
}
//This code has time complexity of O(n)
void add_at_end(struct node *head, int data){
	struct node *ptr, *temp;
	ptr=head;
	
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	
	while(ptr->link!=NULL){
		ptr=ptr->link;
	}
	
	ptr->link=temp;
}


