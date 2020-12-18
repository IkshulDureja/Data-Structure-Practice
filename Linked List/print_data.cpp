#include<iostream>
#include<stdlib.h>
using namespace std;

void print_data(struct node *head);

struct node{
	int data;
	struct node *link;
};

int main(){
	struct node *head=(struct node *)malloc(sizeof(struct node));
	head->data=45;
	head->link=NULL;
	
	struct node *current=(struct node *)malloc(sizeof(struct node));
	current->data=98;
	current->link=NULL;
	head->link=current;
	
	current=(struct node *)malloc(sizeof(struct node));
	current->data=3;
	current->link=NULL;
	head->link->link=current;
	
	print_data(head);
}
//Time complexity of O(n), same as arrays;
void print_data(struct node *head){
	if(head==NULL)
	cout<<"Linked List is empty";
	
	struct node *ptr=NULL;
	ptr=head;
	
	int count=0;
	
	cout<<"Elements in Linked List are:\n";
	while(ptr!=NULL){
		count++;
		cout<<ptr->data<<" ";
		ptr=ptr->link;
	}
	
	cout<<"\nNumber of nodes in Linked List are:"<<count;
}
