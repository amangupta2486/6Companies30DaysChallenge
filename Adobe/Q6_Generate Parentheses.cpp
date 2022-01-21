class Solution
{
    public:
    
    void solve(string s,int i,int j,vector<string> &ans)
    {
        if(i==0 && j==0)
        {
            ans.push_back(s);
            return;
        }
        
        if(i>j)
        {
            return;
        }
        
        if(i==0)
        {
            solve(s+')',i,j-1,ans);
            return;
        }
        
        solve(s+'(',i-1,j,ans);
        solve(s+')',i,j-1,ans);
    }
    
    vector<string> AllParenthesis(int n) 
    {
        vector<string> ans;
        solve("",n,n,ans);
        
        return ans;
    }
};