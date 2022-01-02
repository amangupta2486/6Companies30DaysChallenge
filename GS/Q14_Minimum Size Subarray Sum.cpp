class Solution {
public:
    int minSubArrayLen(int t, vector<int>& a) {
        
        int n=a.size();
        
        int i=0,j=0;
        
        int ans=n+1;
        
        int s=0;
        
        while(i<n)
        {                      
            s+=a[i];
            
            while(s>=t && j<n)
            {   
                ans=min(ans,i-j+1);
                s-=a[j];
                j++;
            }
            
            i++;
        }
        
        if(ans==n+1)
        {
            return 0;
        }
        
        return ans;
    }
};