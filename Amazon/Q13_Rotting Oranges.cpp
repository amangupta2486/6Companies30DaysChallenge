class Solution {
public:
    int orangesRotting(vector<vector<int>>& g) {
        
        int n=g.size();
        int m=g[0].size();
        
        
        queue<pair<int,int>> q;
        
        int o=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==2)
                {
                    q.push({i,j});
                }
                
                if(g[i][j]!=0)
                {
                    o++;
                }
            }
        }
        
        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};
        
        int d=0,days=0;
        
        while(!q.empty())
        {
            int l=q.size();
            d+=l;
            
            while(l--)
            {
                auto p=q.front();
                q.pop();
                
                int i=p.first;
                int j=p.second;
                
                for(int k=0;k<4;k++)
                {
                    int x= i+dx[k];
                    int y= j+dy[k];
                    
                    if(x>=0 && y>=0 && x<n && y<n && g[x][y]==1)
                    {
                        g[x][y]=2;
                        q.push({x,y});
                    }
                }
            }
            
            if(!q.empty())
            {
                days++;
            }
        }
        
        return o==d ? days :-1;
    }
};