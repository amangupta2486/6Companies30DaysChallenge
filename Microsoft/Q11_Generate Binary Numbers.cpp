vector<string> generate(int n)
{
	// Your code here
	vector<string> ans;
	
	for(int i=1;i<=n;i++)
	{
	    string s="";
	    int a=i;
	    
	    while(a>0)
	    {
	        if(a%2==0)
	        s+='0';
	        else
	        s+='1';
	        
	        a=a/2;
	    }
	    
	    reverse(s.begin(),s.end());
	    
	    ans.push_back(s);
	}
	
	return ans;
}