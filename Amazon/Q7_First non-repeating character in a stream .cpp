class Solution {
	public:
		string FirstNonRepeating(string a){
		    // Code here
		    
		    int n=a.size();
		    
		    vector<int> m(26,0);
		    
		    queue<char> q;
		    
		    string ans="";
		    
		    for(int i=0;i<n;i++)
		    {
		        
		        m[a[i]-'a']++;
		        
		        if(m[a[i]-'a']==1)
		        {
		            q.push(a[i]);
		        }
		        
		        while(!q.empty() && m[q.front()-'a']>1)
		        {
		            q.pop();
		        }
		        
		       if(q.size()>0 && !q.empty())
		       {
		           ans+=q.front();
		       }
		       
		       else
		       {
		           ans+='#';
		       }
		        
		    }
		    
		    return ans;
		    
		}

};