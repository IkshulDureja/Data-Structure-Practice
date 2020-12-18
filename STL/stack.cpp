//LAST IN, FIRST OUT
	stack<int> st;
	st.push(1); // {1}
	st.push(2); // {2, 1}
	st.push(3); // {3, 2, 1}
	st.push(3); // {3, 3, 2, 1}
	st.emplace(5); // {5, 3, 3, 2, 1}
	//stack does not direct access of elements
	cout << st.top(); // prints 5  "** st[2] is invalid **"
	
	//top element will get omitted
	st.pop(); // st looks like {3, 3, 2, 1}

	cout << st.top(); // 3

	cout << st.size(); // 4

	cout << st.empty(); //true if stack is empty

	
	stack<int>st1, st2;
	st1.swap(st2);
	
	//stack have limited function. It does not have any iterator like begin, end and all those  stuff
	
