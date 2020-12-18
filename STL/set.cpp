//Set is a container which uses logarithmic time that is why a lot of competitive programmers use set because it is very efficient
//sets stores element in a sorted order but it only stores unique element

set<int>st;
	st.insert(1); // {1}
	st.emplace(2); // {1, 2}
	st.insert(2); // {1, 2}
	st.insert(4); // {1, 2, 4}
	st.insert(3); // {1, 2, 3, 4}

	// Functionality of insert in vector
	// can be used also, that only increases
	// efficiency
	
	//for eg: if you mention the position where you want to insert the element, it will save you a lot of time


	// begin(), end(), rbegin(), rend(), size(),
	// empty() and swap() are same as those of above
	// {1, 2, 3, 4, 5}
	auto it = st.find(3);
	//find() returns an iterator pointing to 3
	
	
	// {1, 2, 3, 4, 5}
	auto it = st.find(6);
	//since, 6 does not exist in set, this pointer will point to set.end() i.e. memory address after the last element
	
	//if it not equal to set.end(). that means the element is present in set
	
	
	// {1, 4, 5}
	st.erase(5); // erases 5 // takes logarithmic time


	int cnt = st.count(1); 
	//how many times an element occur in set: count will be one if element exists otherwise it will be zero
	//so we can use count also to check if the element exists or not
	
	
	auto it = st.find(3);
	st.erase(it); // it takes constant time

	// {1, 2, 3, 4, 5}
	auto it1 = st.find(2);
	auto it2 = st.find(4);
	st.erase(it1, it2); // after erase {1, 4, 5} [first, last) 
	//all the elements from first to last are deleted except the last element

	// lower_bound() and upper_bound() function works in the same way
	// as in vector it does.

	// This is the syntax
	auto it = st.lower_bound(2); 

	auto it = st.upper_bound(3); 

