class Solution{
  public:
    vector<int> find3Numbers(vector<int> a, int n) {

        stack<int> s;
        
        bool f=false;
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()>=a[i])
            {
                s.pop();
            }
            
            s.push(a[i]);
            
            if(s.size()==3)
            {
                f=true;
                break;
            }
        }
         
         vector<int> v;
         
         if(f)
         {
             while(!s.empty())
             {
                v.push_back(s.top());
                s.pop();
             }
         }

         return v;
    }
};