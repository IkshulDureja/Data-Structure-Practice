#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *link;
};

struct node* add_beg(struct node *head, int data);

int main(){
	struct node *head=(struct node *)malloc(sizeof(struct node));
	head->data=45;
	head->link=NULL;
	
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=98;
	ptr->link=NULL;
	head->link=ptr;
	
	int data=3;
	head=add_beg( head, data);
	
	ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->link;
	}
}

struct node* add_beg(struct node *head, int data){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->link=head;
	
	head=ptr;
	return head;	
}
