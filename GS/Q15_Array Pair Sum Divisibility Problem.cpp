class Solution {
  public:
    bool canPair(vector<int> a, int k) {
        // Code here.
        
        int n=a.size();
        
        vector<int> v(n,0);
        
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]%k;
        }
  
        
        unordered_map<int,int> m;
        

        for(auto i:a)
        {
            m[i]++;
        }
        
        if(m[0]%2!=0)
        {
            return 0;
        }
        
        for(int i=1;i<k;i++)
        {
            
            if(m[k-i]!=m[i])
            {
                return 0;
            }
        }
        
        return 1;
    }
};