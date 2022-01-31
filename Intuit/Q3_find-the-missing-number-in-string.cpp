#include<bits/stdc++.h>
using namespace std;
const int MAX_DIGITS = 5;

int missingNumber(const string& str);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        cout << missingNumber(str)<<endl;
    }
	return 0;
}
// } Driver Code Ends


/* You are required to complete this function
which return the required missing number
if present else return -1*/
int missingNumber(const string& s)
{
    
    int n=s.size();
    
    vector<int> ans;
    
    bool f=false;
    
    for(int i=1;i<=6;i++)
    {
        vector<int> v;
        int c=0,d1=0,d2=0;
        
        for(int j=0;j<n;j+=i)
        {
            string b="";
            for(int k=j;k<j+i;k++)
            {
                b+=s[k];
            }
            
            cout<<b<<" ";
            c++;
            v.push_back(stoi(b));
        }
        
        for(int j=0;j<v.size()-1;j++)
        {
            if(v[j+1]-v[j]==1)
            {
                d1++;
            }
            else if(v[j+1]-v[j]==2 && d2==0)
            {
                d2++;
            }
        }
        
        if(d1+d2==c-1)
        {
            f=true;
            ans=v;
        }
    }
    
    if(f)
    {
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i+1]-ans[i]==2)
            {
                return ans[i]+1;
            }
        }
    }
    
    return -1;
}