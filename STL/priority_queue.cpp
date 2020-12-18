//uses the property of queues and stacks
//push,top,pop,size,empty functions
//dynamic in size

//stores the element in a sorted fashion

	priority_queue<int>pq;

	pq.push(5); // {5}
	pq.push(2); // {5, 2}
	pq.push(8); // {8, 5, 2}
	pq.emplace(10); // {10, 8, 5, 2}
	//storing elements in descending order
	cout << pq.top(); // prints 10

	pq.pop(); // {8, 5, 2}

	cout << pq.top(); // prints 8

	// size swap empty function same as others
	
	//greater<int> is a competitor which will store it in reverse manner i.e. ascending order
	
	// Minimum Heap
	priority_queue<int, vector<int>, greater<int>> pq;
	pq.push(5); // {5}
	pq.push(2); // {2, 5}
	pq.push(8); // {2, 5, 8}
	pq.emplace(10); // {2, 5, 8, 10}

	cout << pq.top(); // prints 2
	
	//if we have priority queue of pairs and we want to arrange the priority queue according to me, for that we can write our self competitor 
