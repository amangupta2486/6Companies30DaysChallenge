class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string a[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        
        string b="zzzzzzzz";
        int c=0;
        
        int ans=0;
        
        unordered_map<string,int> m;
        
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;    
        }
        
        for(int i=0;i<n;i++)
        {
            if(m[a[i]]>ans)
            {
                ans=m[a[i]];
            }
        }
        for(auto i:m)
        {
            if(i.second==ans)
            {
                c=i.second;
                
                if(i.first<b)
                b=i.first;
                
                
            }
        }
        
        vector<string> v;
        string d=to_string(c);
        
        v.push_back(b);
        v.push_back(d);
        
        return v;
    }
};