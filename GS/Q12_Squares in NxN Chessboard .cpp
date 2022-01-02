class Solution {
  public:
    long long squaresInChessBoard(long long n) {
        // code here
        
        long long a= ((n*(n+1)*((2*n+1))))/6;
        
        return a;
    }
};