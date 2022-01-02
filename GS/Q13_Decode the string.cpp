class Solution{
public:

    string solve(string &s,int &i)
    {
        int r=0;
        string ans="";
        
        for(;i<s.size();i++)
        {
            if(s[i]=='[')
            {
                string q=solve(s,++i);
                
                while(r>0)
                {
                    ans+=q;
                    r--;
                }
                
            }
            
            else if(s[i]>=0 && s[i]<='9')
            {
                r = (r*10) + (s[i]-'0');
            }
            
            else if(s[i]==']')
            {
                return ans;
            }
            
            else{
                ans+=s[i];
            }
        }
        
        return ans;
    }
    
    string decodedString(string s){
        
        int p=0;
        
        return solve(s,p);
    }
};