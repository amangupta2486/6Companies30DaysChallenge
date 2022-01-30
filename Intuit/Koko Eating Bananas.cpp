class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        
         int n=p.size();
        
        int l=0,r=*max_element(p.begin(),p.end());
        
        while(l<r)
        {
            int m = (l+r)/2;
            
            int x=0;
            
            for(int i=0;i<n;i++)
            {
                x+=p[i]/m;
                
                if(p[i]%m)
                {
                    x++;
                }
            }
            
            if(x<=h)
            {
                r=m;
            }
            else
            {
                l=m+1;
            }
        }
        
        return r;
    }
};