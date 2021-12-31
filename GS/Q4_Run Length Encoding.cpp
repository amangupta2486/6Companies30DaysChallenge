// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string s)
{     
   int n=s.size();
   int c=1;
   string ans="";
   
   int i=0;
   for(i;i<n-1;i++)
   {
       if(s[i]==s[i+1])
       {
           c++;
       }
       
       else
       {
           ans+=s[i];
           ans+=to_string(c);
           c=1;
       }
   }
   

    ans+=s[i];
    ans+=to_string(c);
   
   
   return ans;
}     
 
