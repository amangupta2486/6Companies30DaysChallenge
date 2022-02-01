class Solution {
public:
    
    void dfs(vector<vector<int>>& h ,int i,int j,int n,int m,int prev,vector<vector<int>>& o)
    {
        if(i<0 || j<0 || i>=n || j>=m || o[i][j]==1)
        {
            return ;
        }
        
        if(h[i][j]<prev)
        {
            return;
        }
        
        o[i][j]=1;
        
         dfs(h,i+1,j,n,m,h[i][j],o);
         dfs(h,i,j+1,n,m,h[i][j],o);
         dfs(h,i-1,j,n,m,h[i][j],o);
         dfs(h,i,j-1,n,m,h[i][j],o);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        
        int n=h.size();
        int m=h[0].size();
        
        vector<vector<int>> v;
        
        vector<vector<int>> p(n,vector<int>(m,0));
        vector<vector<int>> a(n,vector<int>(m,0));
        
        int prev=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            dfs(h,i,0,n,m,prev,p);
            dfs(h,i,m-1,n,m,prev,a);
        }
        
        for(int i=0;i<m;i++)
        {
            dfs(h,0,i,n,m,prev,p);
            dfs(h,n-1,i,n,m,prev,a);
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(p[i][j] && a[i][j])
                {
                    v.push_back({i,j});
                }
            }
        }
        
        return v;
    }
};