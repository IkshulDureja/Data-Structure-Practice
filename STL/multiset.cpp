	// Everything is same as set
	// only stores duplicate elements also


	multiset<int>ms;
	ms.insert(1); // {1}
	ms.insert(1); // {1, 1}
	ms.insert(1); // {1, 1, 1}

	ms.erase(1); // all 1's erased

	int cnt = ms.count(1); 

	// only a single one erased
	ms.erase(ms.find(1));
	//ms.find(1) will point to the first one

	ms.erase(ms.find(1), ms.find(1)+2);
	//here two 1 will be deleted because we know that last element is not included
	
	// rest all function same as set

