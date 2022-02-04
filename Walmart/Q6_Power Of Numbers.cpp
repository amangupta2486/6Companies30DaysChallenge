class Solution{
    public:
        
    long long power(int x,int n)
    {
       
        if(n==0)
        {
            return 1;
        }
        
        long long r = power(x,n/2);
        
        if(n%2==0)
        {
            return ((r%mod)*(r%mod))%mod;
        }
        
        else
        {
            long long temp = ((r%mod)*(r%mod))%mod;
            
            return ((temp%mod) * (x%mod))%mod;
        }
    }

};