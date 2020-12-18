//add at end when array is full
//Time complexity is O(n)
#include<iostream>
using namespace std;

int add_at_end(int a[], int b[], int size, int freepos, int data);

int main(){
	int a[3];
	int n,i,freepos;
	cout<<"enter number of elements:";
	cin>>n;
	cout<<"enter elements:";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int size= sizeof(a)/sizeof(a[0]);
	freepos=n;
	if(n==size){
		int b[size+2];
		freepos=add_at_end(a,b,size,freepos,67);
		
		cout<<"elements are:\n";
		for(i=0;i<freepos;i++){
			cout<<b[i]<<" ";
		}
	}
	
	return 0;
}

int add_at_end(int a[],int b[],int size,int freepos,int data){
	int i;
	for(i=0;i<size;i++){
		b[i]=a[i];
	}
	b[freepos]=data;
	freepos++;
	return freepos;
}
