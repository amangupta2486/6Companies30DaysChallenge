class Solution {
public:
    int longestMountain(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> p(n,0);
        vector<int> s(n,0);
        
        for(int i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1])
            {
                p[i]=p[i-1]+1;
            }
            
        }
        
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>a[i+1])
            {
                s[i]=s[i+1]+1;
            }
        }
        
        int ans=0;
        
//         for(int i=0;i<n;i++)
//         {
//             cout<<p[i]<<" ";
//         }
//         cout<<endl;
        
//         for(int i=0;i<n;i++)
//         {
//             cout<<s[i]<<" ";
//         }
        
//         cout<<endl;
        
        for(int i=0;i<n;i++)
        {
            if(p[i]!=0 && s[i]!=0)
            ans=max(ans,p[i]+s[i]);    
        }
        
        if(ans==0)
        {
            return 0;
        }
        
        return ans+1;
    }
};