//add at end when array is not full
#include<iostream>
using namespace std;

void add_at_end(int a[],int freepos,int n);

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
	add_at_end(a,freepos,67);
	
	cout<<"elements are:\n";
	for(i=0;i<freepos;i++){
		cout<<a[i];		
	}
	
	return 0;
}

void add_at_end(int a[], int freepos, int n){
	a[freepos]=n;
	freepos++;
	return freepos;
}
