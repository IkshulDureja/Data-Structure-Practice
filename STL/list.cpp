#include<iostream>
using namespace std;

int main(){
	list<int> ls;
	
	ls.push_back(20);  //{20};
	
	ls.emplace_back(40); //{20,40};
	
	ls.pop_front(50); //{50,20,40};
	
	ls.push_front(50); // {50, 20, 40};

	ls.emplace_front(); //{20, 40};

	// rest functions same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap

	//vectors work better than list when it comes to complexity
	//we only prefer list when we have to insert elements in front
}
