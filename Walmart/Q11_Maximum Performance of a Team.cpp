class Solution {
public:
    int maxPerformance(int n, vector<int>& s, vector<int>& e, int k) {
        
        vector<vector<int>> v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back({e[i],s[i]});
        }
        
        sort(v.rbegin(),v.rend());
        
        int ans=0,g=0;
        
        priority_queue<int,vector<int>,greater<int>> q;
        
        for(int i=0;i<n;i++)
        {
            int s=v[i][1];
            int eff=v[i][0];
            
            
            
            g+=s;
            
            q.push(s);
            
            while(q.size()>k)
            {
                g-=q.top();
                q.pop();
            }
            
            ans=max(ans,g*eff);
            
        }
        
        int x = 1000000007;

        return ans%x;
    }
};