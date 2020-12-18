#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

	//An empty vector
	vector<int> v; //{}
	v.push_back(1); //{1}
	v.emplace_back(2); //{1,2}
	
	vector<pair<int, int>> q;	
	q.push_back({1,2});
	q.emplace_back(1,2); //enbuild to store it as pair, not applicable with pair<int, pair<int, int>>
	
	//vector of size 5 with every element as 100
	vector<int> w(5,100); //{100,100,100,100,100}
	
	//if not given value, every element might get a garbage value but most of the compilers intialise element with zero
	vector<int> x(5); //{0,0,0,0,0}
	
	vector<int> v1(5,20);
	vector<int> v2(v1); //copy of v1
	
	vector<int> v3 = {10,20,30,40};
	vector<int>::iterator it = v3.begin();//iterator it points to 10
	cout<<*(it)<<endl;
	
	it++;
	cout<<*(it)<<endl;
	
	it = it +2;
	cout<<*(it)<<endl;
	
	vector<int>::iterator it1 = v3.end();//memory space after 40
	//vector<int>::iterator it2 = v3.rend();//memory space before 10
	//vector<int>::iterator it3 = v3.rbegin();//points to 40
	
	//if we use (constant)cend or cbegin, then we can not change the iterator

	//access without iterator
	cout<<v3[0]<<" "<<v3.at(0)<<endl;
	cout<<v3.back()<<endl;//last element when you don't know the size
	
	
	//ways to print the vector
	for(vector<int>::iterator it = v3.begin(); it != v3.end(); it++){
		cout<<*(it)<<" ";
	}
	cout<<endl;
	
	
	for(auto it = v3.begin(); it != v3.end(); it++){
		cout<<*(it)<<" ";
	}
	cout<<endl;
	
	//for each loop, moving through the elements, not the iterators
	for(auto it : v3){
		cout<<it<<" ";
	}
	cout<<endl;
	
	//erase element from a vector
	vector<int> v4 = {10,20,12,23};
	v4.erase(v4.begin()+1);//erase 20
	
	//erase the range
	vector<int>v5={10,20,12,23,40};
	v5.erase(v5.begin()+2,v5.begin()+4); //{10,20,40} delete from {start to end} except the end;
	
	//insert function
	vector<int>v6(2,100); //{100,100}
	v6.insert(v6.begin(),30); //{30,100,100}
	v6.insert(v6.begin()+1,2,10);//{30,10,10,100,100}
	
	vector<int>copy(2,50);//{50,50}
	v6.insert(v6.begin(),copy.begin(),copy.end()) //{50,50,30,10,10,100,100}
	
	{10,20}
	v.size(); //2
	v.pop_back();//{10}, removes the last element and shrinks the vector size by minus one
	
	//v1->{10,20}
	//v2->{30,40}
	v1.swap(v2); //v1->{30,40}, v2->{10,20};
	
	v.clear(); //erases the entire vector;
	
	cout<<v.empty(); //if true then vector is empty, if false then it have some elements in it
	
	
	
	
	
}
