
	// {key, value}
	map<int, int> mpp;

	map<int, pair<int, int>> mpp;

	map< pair<int, int>, int> mpp;

	// key values can be anything

	mpp[1] = 2;
	mpp.emplace({3, 1});

	mpp.insert({2, 4});
 
	//map stores everything inside it in a sorted manner
	//sorted according to the keys
	{
		{1, 2}
		{2, 4}
		{3, 1}
	}
	
	
	mpp[{2,3}] = 10; //if key is a pair
	
	for(auto it : mpp) {
		cout << it.first << " " << it.second << endl; 
	}//same way we did in pairs

	// same options for using iterators
	// as we did in vector for the insert function

	//access the value of a particular key
	cout << mpp[1]; // prints 2
	cout << mpp[5]; // prints 0, since it does not exists


	auto it = mpp.find(3); // points to the position where 3 is found
	cout << *(it).second; //to print the value of this key

	auto it = mpp.find(5); // points to the end of the map since 5 not there
	//points to mpp.end() similar to the set
	
	// lower_bound and upper_bound works exactly in the 
	// same way as explained in the other video 
    
    // This is the syntax
    //give the key, not the value because map is sorted according to the keys
	auto it = mpp.lower_bound(2); 

	auto it = mpp.upper_bound(3); 

	// erase, swap, size, empty, are same as above 

//map allows to store {1,2} and {1,3}
