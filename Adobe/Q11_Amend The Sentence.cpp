class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        
        int n=s.size();
        
        vector<string> v;
        
        string a="";
        a+=tolower(s[0]);
        
        for(int i=1;i<n;i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                a+=tolower(s[i]);
            }
            
            else
            {
                v.push_back(a);
                a="";
                a+=tolower(s[i]);
            }
        }
        
        v.push_back(a);
        
        string ans="";
        
        for(auto i:v)
        {
            ans+= i;    
            ans+=" ";
        }
        
        ans.pop_back();
        
        return ans;
    }
};