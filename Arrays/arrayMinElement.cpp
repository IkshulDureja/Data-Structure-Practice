#include<iostream>
using namespace std;
int arrayMinElement(int a[],int n){
	int min=0;
	for(int i=0;i<n;i++){
		if(a[min]>a[i]){
			min=i;
		}
	}
	return a[min];
}
int main(){
	int a[50],n,min;
		cout<<"enter size of arrays";
	cin>>n;
	cout<<"enter elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Array:\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}
	min=arrayMinElement(a,n);
	cout<<"minimum element in array is:"<<min;
}
