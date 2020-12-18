#include<iostream>
using namespace std;
int main(){
	int a[20][20],i,j,ktemp[100][3],n,m,k=0,count=0;
	cout<<"enter number of rows of matrix:";
	cin>>n;
	cout<<"enter number of colums of matrix:";
	cin>>m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<"enter ["<<i<<"]["<<j<<"] element: ";
			cin>>a[i][j];
			if(a[i][j]!=0){
				ktemp[k][0]=i;
				ktemp[k][1]=j;
				ktemp[k][2]=a[i][j];
				k++;
			}
		}
	}


cout<<"The sparse matrix is:\n";
cout<<"Row Column Value\n";
cout<<n<<"   "<<m<<"       "<<k<<"\n";
for(i=0;i<k;i++){
	for(j=0;j<3;j++){
		cout<<ktemp[i][j]<<"    ";
	}
	cout<<"\n";
}

}
