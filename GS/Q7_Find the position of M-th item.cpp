class Solution {
  public:
    int findPosition(int n, int m, int k) {
        // code her
        
        if(m<= n-k+1)
        {
            return m+k-1;
        }
        
        m=m - (n-k+1);
        
        if(m%n==0)
        {
            return n;
        }
        
        return m%n;
    }
};