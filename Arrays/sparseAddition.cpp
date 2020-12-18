#include<iostream>
void addition(int ktemp[100][3],int ltemp[100][3],int p, int q,int k,int l);
using namespace std;
int main(){
	int a[20][20],i,j,ktemp[100][3],n,m,k=0,p,q,l=0,b[20][20],ltemp[100][3];
	cout<<"enter number of rows of first matrix:";
	cin>>n;
	cout<<"enter number of colums of first matrix:";
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
cout<<n<<"    "<<m<<"    "<<k<<"\n";
for(i=0;i<k;i++){
	for(j=0;j<3;j++){
		cout<<ktemp[i][j]<<"    ";
	}
	cout<<"\n";
}

cout<<"enter number of rows of second matrix:";
	cin>>p;
	cout<<"enter number of colums of second matrix:";
	cin>>q;
	if(p!=m && q!=n ){
		cout<<"Addition can only be performed onmatrix of same order";
	}
	else{
	  for(i=0;i<p;i++){
	  	for(j=0;j<q;j++){
	  		cout<<"enter ["<<i<<"]["<<j<<"] element:";
	  		cin>>b[i][j];
	  		if(b[i][j]!=0){
	  			ltemp[l][0]=i;
	  			ltemp[l][1]=j;
	  			ltemp[l][2]=b[i][j];
	  			l++;
			  }
		  }
	  }
	  
	  cout<<"The sparse matrix is:\n";
	  cout<<"Row Column Value\n";
	  cout<<p<<"     "<<q<<"     "<<l<<"\n";
	  for(i=0;i<l;i++){
	  	for(j=0;j<3;j++){
	  		cout<<ltemp[i][j]<<"     ";
		  }
		  cout<<"\n";
	  }
	  addition(ktemp,ltemp,p,q,k,l);
	}
return 0;
}

void addition(int ktemp[100][3], int ltemp[100][3], int p, int q, int k, int l){
	int sparse[100][3],i=0,j=0,c=0,m,n,x;
	sparse[0][0]=p;
	sparse[0][1]=q;
	
	m=k;
	n=l;
	
	while(i<=m && j<=n){
		if(ktemp[i][0]<ltemp[j][0]){
			sparse[c][0]=ktemp[i][0];
			sparse[c][1]=ktemp[i][1];
			sparse[c][2]=ktemp[i][2];
			i++;
			c++;
			}
			else if(ktemp[i][0]>ltemp[j][0]){
				sparse[c][0]=ltemp[j][0];
				sparse[c][1]=ltemp[j][1];
				sparse[c][2]=ltemp[j][2];
				j++;
				c++;				
			}
			else if(ktemp[i][0]==ltemp[j][0]){
				if(ktemp[i][1]<ltemp[j][1]){
					sparse[c][0]=ktemp[i][0];
					sparse[c][1]=ktemp[i][1];
					sparse[c][2]=ktemp[i][2];
					i++;
					c++;
				}
				else if(ktemp[i][1]>ltemp[j][1]){
					sparse[c][0]=ltemp[j][0];
					sparse[c][1]=ltemp[j][1];
					sparse[c][2]=ltemp[j][2];
					j++;
					c++;			
				}
				else if(ktemp[i][1]==ltemp[j][1]){
					sparse[c][0]=ktemp[i][0];
					sparse[c][1]=ktemp[i][1];
					sparse[c][2]=ktemp[i][2]+ltemp[j][2];
					c++;
					i++;
					j++;
				}
			}
		}
		while(i<=m){
				    sparse[k][0]=ktemp[i][0];
					sparse[k][1]=ktemp[i][1];
					sparse[k][2]=ktemp[i][2];
					i++;
					k++;
			}
		while(j<=n){
			        sparse[k][0]=ltemp[j][0];
					sparse[k][1]=ltemp[j][1];
					sparse[k][2]=ltemp[j][2];
					j++;
					k++;			
				}
				sparse[0][2]=k;
	cout<<"The sparse matrix formed after addition of two matrix is:\n";
	cout<<"Row Column Value\n";
	//cout<<sparse[0][0]<<sparse[0][1]<<sparse[0][2]<<"\n";
	for(i=0;i<k;i++){
		for(j=0;j<3;j++){
			cout<<sparse[i][j];
		}
		cout<<"\n";
	}
}
