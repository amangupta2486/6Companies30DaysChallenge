class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        int dp[a+1][b+1];
        
        memset(dp,-1,sizeof(dp));
        
        for(int i=0;i<=a;i++)
        {
            dp[i][b]=1;
        }
        
        for(int i=0;i<=b;i++)
        {
            dp[a][i]=1;
        }
        
        for(int i=a-1;i>=1;i--)
        {
            for(int j=b-1;j>=1;j--)
            {
              dp[i][j]= dp[i+1][j]+dp[i][j+1];
            }
        }
        
        return dp[1][1];
    }
};