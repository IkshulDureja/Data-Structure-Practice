unordered set stores all the unique element but not in a sorted fashion
It stores internally in a fashion such that time complexity is constant in average case
It's preferable to use unordered set in competitive programming but at times you might face wrong answers due to unordered set because of collisions
Be careful when we use unordered set and set

unordered_set<int> st;
	// lower_bound and upper_bound function
	// does not works, rest all functions are same
	// as above,  it does not stores in any
	// particular order it has a better complexity
	// than set in most cases, except some when collision happens

