class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > g, int r, int c) 
    {
        // code here 
        
         int n1=0,n2=r-1;
         int m1=0,m2=c-1;
         
         vector<int> v;
         
         while(n1<=n2 && m1<=m2)
         {
            for(int i=m1;i<=m2;i++)
            {
                v.push_back(g[n1][i]);
            }
            
            
            for(int i=n1+1;i<n2;i++)
            {
                v.push_back(g[i][m2]);
            }
            
            if(n2!=n1)
            {
                for(int i=m2;i>=m1;i--)
                {
                    v.push_back(g[n2][i]);
                }
            }
            
            if(m2!=m1)
            {
                for(int i=n2-1;i>n1;i--)
                {
                    v.push_back(g[i][m1]);
                }
            }
            
            n1++;
            n2--;
            m1++;
            m2--;
         }
         
         return v;
    }
};