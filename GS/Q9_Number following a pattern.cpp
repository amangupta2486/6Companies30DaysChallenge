class Solution{   
public:
    string printMinNumberForPattern(string s){
        // code here 
        int n=s.size();
        
        vector<int> v(n+1,0);
        
        for(int i=0;i<=n;i++)
        {
            v[i]=i+1;
        }
        
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='D')
            {
                bool f=0;
                
                for(int j=i;j<n && v[j]<=v[j+1] && s[j]=='D';j++)
                {
                    swap(v[j],v[j+1]);
                    f=1;
                }
                
                if(f)
                {
                    i--;
                }
            }
        }
        
        string ans="";
        
        for(auto i:v)
        {
            ans+=to_string(i);
        }
        return ans;
    }
};