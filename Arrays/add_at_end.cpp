//add at end when array is not full
//Time complexity is O(1)
#include<iostream>
using namespace std;

int add_at_end(int a[],int freepos,int data);

int main(){
	int a[10];
	int i,n,freepos;
	cout<<"enter number of elements";
	cin>>n;
	cout<<"enter value of elements";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	freepos=n;
	
	freepos=add_at_end(a,freepos,67);
	
	cout<<"elements are:\n";
	for(i=0;i<freepos;i++){
		cout<<a[i]<<" ";		
	}
	
	return 0;
}

int add_at_end(int a[], int freepos, int data){
	a[freepos]=data;
	freepos++;
	return freepos;
}
