
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        long long c=0;
        long long p=1;
        
        int j=0,i=0;
        
        while(i<n && j<n)
        {
            p*=a[i];
                        
            while(p>=k && j<i)
            {
                p=p/a[j];
                j++;
            }
            
            if(p<k)
            {
                c+=(i-j)+1;
            }
            
            i++;
        }
        
        return c;
    }
};