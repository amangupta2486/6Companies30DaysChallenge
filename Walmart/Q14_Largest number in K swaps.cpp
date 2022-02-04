class Solution
{
    public:
    //Function to find the largest number after k swaps.
    void solve(string str, string &r, int k, int pos)
    {
        if(k == 0)
            return;
            
        char maxm = str[pos];
        for(int i = pos+1; i < str.length() ;i++)
        {
            if(maxm < str[i])
                maxm = str[i];
        }
        
        if(maxm != str[pos])
            k--;
            
        for(int i=str.length()-1; i>=pos ;i--)
        {
            if(str[i] == maxm)
            {
                swap(str[i], str[pos]);
                if(str.compare(r) > 0)
                    r = str;
                    
                solve(str, r, k, pos+1);
                
                swap(str[i], str[pos]);
            }
        }
    }
    
    string findMaximumNum(string str, int k)
    {
       
       string r = str;
       solve(str, r, k, 0);
       return r;
    }
};