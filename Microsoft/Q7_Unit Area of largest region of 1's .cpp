class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    
    void dfs(vector<vector<int>>& g,int i,int j,int n,int m,int &c)
    {
        if(i<0 || i>=n || j<0 ||j>=m || g[i][j]!=1)
        {
            return;
        }
        
        if(g[i][j]==1)
        {
            c++;
            g[i][j]=2;
        }
        
        dfs(g,i+1,j,n,m,c);
        dfs(g,i-1,j,n,m,c);
        dfs(g,i,j+1,n,m,c);
        dfs(g,i,j-1,n,m,c);
        dfs(g,i+1,j+1,n,m,c);
        dfs(g,i+1,j-1,n,m,c);
        dfs(g,i-1,j+1,n,m,c);
        dfs(g,i-1,j-1,n,m,c);
    }
    
    int findMaxArea(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1)
                {
                    int c=0;
                    dfs(g,i,j,n,m,c);
                    ans=max(ans,c);
                }
            }
        }
    }
};
