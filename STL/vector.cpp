#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	
std::vector<int> A = {11,2,3,14};
	
	cout<<A[1]<<endl;
	
	sort(A.begin(),A.end()); //O(NLogN)

	//Binary Search in O(LogN)
	
	return 0;
}
