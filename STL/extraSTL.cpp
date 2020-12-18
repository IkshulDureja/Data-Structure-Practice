void explainExtra() {

	//sort an array in ascending order
	sort(a,a+n)
	
	//sort a range of array
	sort(a+2, a+4); // [first, last) where last is not included

	//to sort in descending order, use this competitor as we did in prioriy queue, greater<> will reverse it
	sort(a, a+n, greater<int>); 
    
    
    //sort an array according to your wish
    pair<int,int> a[] = {{1,2}, {2, 1}, {4, 1}}; 

    // sort it according to second element 
    // if second element is same, then sort 
    // it according to first element but in descending 

	sort(a, a+n ,comp); 

	// {4,1}, {2, 1}, {1, 2}}; 
	//here since 1 is matching in 1st and 2nd  pair, then sort in descending order to the first element

	//what standard sort() algorithm does it,  it will sort according to first element in ascending order and if first element is same, it will sort according to second element in descending order only
	
	int num = 7; // 111 
	int cnt = __builtin_popcount(); //eventually the count will be three, it basically count the number of setbits in the binary representation of a number 

	long long num = 165786578687;
	int cnt = __builtin_popcountll();//now, what if if the number is very large, __builtin_popcount only works for integers, so for that what you need to do is, you gotta write just ll, if you write ll, that works for long long 

	//if there is a string in next dictionary order,  next permutation returns true
	//if there is none, next permutation returns false
	string s = "123"; 

	do {
		cout << s << endl; 
	} while(next_permutation(s.begin(), s.end())); //It returns true for all the elements except  for 321
	//It works for arrays, vector, list  etc. applying next_permutation[a,a+n] will give the next permutation of the array
	// 123
	// 132
	// 213
	// 231
	// 312
	// 321
	//it is used in a problem where we have to try all the possible combination, where you can sort the array initially and then try next permutation, so what will happen is all the permutations will be tried
	//this only happens when you start from the least and move till the extremist


	int maxi = *max_element(a,a+n); //to find maximum element in a given range *max_element(first_iterator,last iterator) i.e. range in which you want to find the maximum element, here we have taken the entire array
	
}

//in order to write a competitive function, you want to take a boolean function
//it can be int, it basically has to return 0 or 1 where 0 means false and 1 means true
//take whatever the data type of array is, it takes exactly two elements in the function parameter
//Why two? Think that the array has two elements eventually p1 means the first index element and p2 means the second index element, basically array has two elements
//what if i only want to compare those two elements
bool comp(pair<int,int>p1, pair<int,int>p2) {
	if(p1.second < p2.second) {
		return true; 
	} else if(p1.second == p2.second){
		if(p1.first>p2.first) return true; 
	}
	return false; 
}
//returning true means pair 1 will always lie ahead of pair 2
//returning false means pair 2 will always lie ahead of pair 1
