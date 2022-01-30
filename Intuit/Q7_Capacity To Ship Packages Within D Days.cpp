class Solution {
public:
    int shipWithinDays(vector<int>& a, int d) {
        
        int n=a.size();
        
        int s=0;
        
        for(auto i:a)
        {
            s+=i;
        }
        
        int l=0,h=s;
        int ans=INT_MAX;
          int q=*max_element(a.begin(),a.end());
        
        while(l<h)
        {
            int m=(l+h)/2;
            
            int b=0,c=0;
            
            for(int i=0;i<n;i++)
            {
                if(b+a[i]<=m)
                {
                    b+=a[i];
                }
                else
                {
                    c++;
                    b=a[i];
                }
            }
            
            if(b==a[n-1])
            c++;
            
            if(c<=d && m>=q)
            {
                // ans=min(ans,m);
                h=m;
            }
            else
            {
                l=m+1;
            }
        }
        
      
        
        return h;
    }
};