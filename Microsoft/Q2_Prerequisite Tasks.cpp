class Solution {
public:
	bool isPossible(int n, vector<pair<int, int> >& p) {
	    // Code here
	    
	    vector<int> in(n,0);
	    vector<int> v[n];
	    
	    for(auto i:p)
	    {
	        v[i.second].push_back(i.first);
	        in[i.first]++;
	    }
	    
	    queue<int> q;
	    int ans=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(in[i]==0)
	        {
	            q.push(i);
	            ans++;
	        }
	    }
	    
	    while(!q.empty())
	    {
	        int l=q.size();
	        
	        while(l--)
	        {
	            int p=q.front();
	            q.pop();
	            
	            for(auto x:v[p])
	            {
	                in[x]--;
	                
	                if(in[x]==0)
	                {
	                    ans++;
	                    q.push(x);
	                }
	            }
	        }
	    }
	    
	    return ans==n ? 1 : 0;
	}
};