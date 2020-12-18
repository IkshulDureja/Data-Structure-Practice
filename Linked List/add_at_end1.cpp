//This is the optimal code with time complexity O(1)

#include<iostream>
#include<stdlib.h>
using namespace std;


struct node{
	int data;
	struct node *link;
};

struct node* add_at_end(struct node *ptr,  int data){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	
	ptr->link=temp;
	return temp;
}

int main(){
	struct node *head=(struct node *)malloc(sizeof(struct node));
	head->data=98;
	head->link=NULL;
	
	struct node *ptr=head;
	ptr=add_at_end(ptr,45);
	ptr=add_at_end(ptr,3);
	ptr=add_at_end(ptr,67);
	
	ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->link;
	}
	
	return 0;
}
