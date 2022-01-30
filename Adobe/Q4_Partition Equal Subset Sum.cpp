int equalPartition(int n, int a[])
{

    if(n==1)
    {
        return 0;
    }

    int s=0;

    for(int i=0;i<n;i++)
    {
        s+=a[i];
    }

    if(s%2==1)
    {
        return 0;
    }

    int r=s/2;
    int t = pow(2,n);


    //int dp[n+1][s+1];
    s=s/2;

    bool dp[n+1][s+1];

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<s+1;j++)
        {
            if(i==0)
            {
                dp[i][j]=0;
            }
            else if(j==0)
            {
                dp[i][j]=1;
            }
            
            else if(a[i-1]<=j)
            {
                dp[i][j]= dp[i-1][j-a[i-1]] || dp[i-1][j];
            }
            
            else
            {
                dp[i][j]= dp[i-1][j];
            }
        }
    }

    return dp[n][s];

}