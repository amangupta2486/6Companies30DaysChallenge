class Solution {
	public:
		int CountWays(string s){
		   
		   int n=s.size();
		   
		   vector<int> dp(n+2,0);
		   
		   dp[n+1]=1;
		   dp[n]=1;
		   
		   for(int i=n-1;i>=0;i--)
		   {
		       int op1 = s[i]-'0';
		       int op2;
		       
		       if(i<n-1)
		       {
		         op2= op1*10 +(s[i+1]-'0');    
		       }
		       
		       if(op1>0)
		       {
		           dp[i]+=(dp[i+1]%1000000007);
		       }
		       
		       if(op1>0 && op2>00 && op2<=26)
		       {
		           dp[i]+=(dp[i+2]%1000000007);
		       }
		   }
		   
		   return dp[0]%1000000007;
		}
};