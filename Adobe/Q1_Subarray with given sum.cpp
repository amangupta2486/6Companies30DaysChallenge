class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int a[], int n, long long s)
    {
        // Your code here
        
        vector<long long> p(n+1,0);
        
        for(int i=1;i<=n;i++)
        {
            p[i]=p[i-1]+a[i-1];
        }
        
        int i=0,j=0;
        vector<int> v;
        
        while(i<=n && j<=n)
        {
            if(p[i]-p[j]==s)
            {
                v.push_back(j+1);
                v.push_back(i);
                break;
            }
            
            if(p[i]-p[j]<s)
            {
                i++;
            }
            
            else if(p[i]-p[j]>s)
            {
                j++;
            }
        }
        
        if(v.size()==0)
        {
            v.push_back(-1);
            return v;    
        }
        
        return v;
    }
};