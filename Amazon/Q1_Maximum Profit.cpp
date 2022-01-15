class Solution {
  public:
    int maxProfit(int k, int n, int a[]) {
        // code here
        
        if(n<=1)
        {
            return 0;
        }
        
        int dp[k+1][n];
        
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<=k;i++)
        {
            int max_diff=INT_MIN;
            
            for(int j=1;j<n;j++)
            {
                max_diff = max(max_diff,dp[i-1][j-1]-a[j-1]);
                dp[i][j]=max(dp[i][j-1],a[j]+max_diff);
            }
        }
        
        return dp[k][n-1];
    }
};