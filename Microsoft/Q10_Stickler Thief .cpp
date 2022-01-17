class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int a[], int n)
    {
        // Your code here
        
        vector<int> dp(n,0);
        
        if(n==1)
        {
            return a[0];
        }
        
        if(n==2)
        {
            return max(a[0],a[1]);
        }
        
        dp[0]=a[0];
        dp[1]=max(a[0],a[1]);
        
        for(int i=2;i<n;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+a[i]);
        }
        
        return dp[n-1];
    }
};