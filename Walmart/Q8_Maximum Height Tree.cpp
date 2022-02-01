class Solution{
public:
    int height(int n){

        int x = 1 + (4*2*n);
        int y= sqrt(x);
        
        int z = (y-1)/2;
        
        return z;
    }
};