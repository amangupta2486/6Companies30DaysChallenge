#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	priority_queue<int> q;
	
	int a[n];
	
	for (int i = 0; i < n; i++) {
	    cin>>a[i];
	}
	
	for (int i = 0; i < n; i++) {
	    
	    q.push(a[i]);
	    
	    if(q.size()>10)
	    {
	        q.pop();
	    }
	    
	}
	
	while(!q.empty())
	{
	    cout<<q.top()<<" ";
	    q.pop();
	}
	
	
	return 0;
}
