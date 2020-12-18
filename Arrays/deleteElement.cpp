#include<iostream>
using namespace std;
int deleteElement(int a[],int n, int pos){
	int temp=a[pos];
	for(int i=pos;i<=n-1;i++){
		a[i]=a[i+1];
	}
	n--;
	return temp;
}
int main(){
	int a[50],n,num,pos,deleted;
	cout<<"enter array size";
	cin>>n;
	cout<<"enter array elements";
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	
	cout<<"array elements are:\n";
	for(int i=0;i<n;i++){
	cout<<a[i]<<"\n";
	}
	cout<<"enter position of the number to be deleted:";
	cin>>pos;
	deleted=deleteElement(a,n,pos);
	cout<<"element that was deleted was:";
	cout<<deleted<<"\n";
	cout<<"array elements after deletion are:\n";
	for(int i=0;i<(n-1);i++){
	cout<<a[i]<<"\n";
	}
return 0;
}
