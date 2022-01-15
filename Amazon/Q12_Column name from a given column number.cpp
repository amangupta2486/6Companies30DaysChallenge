class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        
        int c=0;
        
        int a=1;
        string ans="";
        
        while(n>0)
        {
            int r=n%26;
            
            if(r==0)
            r=26;
            
            n-=r;
            
            char p= (char)(65+r-1);
            ans+=p;
            
            n=n/26;
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};