#include<iostream>
using namespace std;
int linearSearch(int a[],int n,int num){
	for(int i=0;i<n;i++){
		if (a[i]==num)
		return i;
		
	}
	return -1;
}
int main(){
	int a[50],n,num,index;
	cout<<"enter array size";
	cin>>n;
	cout<<"enter array elements";
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	cout<<"enter num to be searched";
	cin>>num;
	cout<<"array elements are:\n";
	for(int i=0;i<n;i++){
	cout<<a[i]<<"\n";
	}
	index=linearSearch(a,n,num);
	cout<<"index at which the num is found is:"<<index;
	
	
	
}
