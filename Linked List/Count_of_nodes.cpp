#include<iostream>
#include<stdlib.h>
using namespace std;

void count_of_nodes(struct node *head);

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
	
	count_of_nodes(head);
	return 0;
}
//Time complexity is O(n), while arrays can do this in O(1)
void count_of_nodes(struct node *head){
	int count=0;
	if(head==NULL)
	cout<<"Linked list is empty";
	
	struct node *ptr=NULL;
	ptr=head;
	
	while(ptr!=NULL){
		count++;
		ptr=ptr->link;
	}
	cout<<"No of nodes in Linked List were:"<<count;
}

