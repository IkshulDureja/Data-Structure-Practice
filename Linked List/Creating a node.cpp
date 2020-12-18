#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *link;
};

int main(){
	struct node *head = NULL;
	head = (struct node *)malloc(sizeof(struct node));
	
	int num;
	cout<<"Enter any number";
	cin>>num;
	head->data=num;
	head->link=NULL;
	
	cout<<"Number that you entered is:"<<head->data;
	return 0; 
	
}
