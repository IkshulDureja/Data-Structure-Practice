#include<iostream>
#define MAX 4
using namespace std;
int main(){
	int i,j,k=0,size=(MAX*(MAX+1)/2),a[size];
	cout<<"Storing only non-zero elements of Triangular Matrix:\n";
	cout<<"enter elements(row-major):\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"\nUpper Triangular Metrix is:\n";
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			if(i<=j){
				cout<<a[k]<<" ";
				k++;
			}
			else{
				cout<<"0 ";
			}
		}cout<<"\n";
	}
	k=0;
	cout<<"\nLower Triangular matrix is:\n";
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			if(i>=j){
				cout<<a[k]<<" ";
				k++;
				}
				else{
					cout<<"0 ";
				}
		}cout<<"\n";
	}
	return 0;
}
