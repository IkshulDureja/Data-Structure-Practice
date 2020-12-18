#include<iostream>
using namespace std;

void explainPairs(){
	pair<int, int> P = {1,3};
	cout<<P.first<<" "<<P.second<<endl;
	
	pair<int, pair<int, int>> q = {1,{3,4}};
	cout<<q.first<<" "<<q.second.second<<" "<<q.second.first<<endl;
	
	pair<int, int> arr[]= {{1,2},{2,5},{5,1}};
	cout<<arr[1].second;
}

int main(){
	
	explainPairs();
	
	return 0;
}
