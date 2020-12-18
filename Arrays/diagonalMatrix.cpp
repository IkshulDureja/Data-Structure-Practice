#include<iostream>
#define MAX 4
using namespace std;
int main(){
	int i,j,a[MAX];
	cout<<"storing only diagonal elements of diagonal matrix"<<endl;
	cout<<"enter elements(row major):\n";
    for(i=0;i<MAX;i++){
    	cin>>a[i];
	}
	cout<<"The matrix is:\n";
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			if(i==j)
			cout<<a[i]<<" ";
			else
			cout<<"0 ";
		}
		cout<<"\n";
		}
		return 0;
}
