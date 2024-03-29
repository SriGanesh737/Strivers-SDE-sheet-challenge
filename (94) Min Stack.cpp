#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// I will maintain the element and what is the minimum element till then in stack.
	stack<pair<int,int>>st;

	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			if(st.empty()) st.push({num,num});
			else st.push({num,min(num,st.top().second)});
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(st.empty()) return -1;
			int ans = st.top().first;
			st.pop();
			return ans;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(st.empty()) return -1;
			return st.top().first;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(st.empty()) return -1;
			return st.top().second;
		}
};