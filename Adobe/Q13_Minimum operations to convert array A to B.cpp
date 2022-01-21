
class Solution {
  public:
  
    int solve(int a[], int b[], int n, int m,vector<vector<int>> &dp)
    {
        if(n==0)
        {
            return m;
        }
        if(m==0)
        {
            return n;
        }
        
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        if(a[n-1]==b[m-1])
        {
            return dp[n][m]=solve(a,b,n-1,m-1,dp);
        }
        
        return dp[n][m]=1+min({solve(a,b,n-1,m,dp),solve(a,b,n,m-1,dp)});
    }
    
    int minInsAndDel(int a[], int b[], int n, int m) {
        
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
 
        return solve(a,b,n,m,dp);
    }
};