#include<iostream>
using namespace std;
void insert(int a[],int n,int num, int pos){
	for(int i=n-1;i>=pos;i--){
		a[i+1]=a[i];
	}
	a[pos]=num;
	n++;
}
int main(){
	int a[50],n,num,pos;
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
	cout<<"enter num to be entered and the position:";
	cin>>num>>pos;
	insert(a,n,num,pos);
	
	cout<<"array elements after inserting are:\n";
	for(int i=0;i<=n;i++){
	cout<<a[i]<<"\n";
	}
return 0;
}
