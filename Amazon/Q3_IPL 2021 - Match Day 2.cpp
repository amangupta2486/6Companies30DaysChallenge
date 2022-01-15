class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> a, int n, int k) {
        // your code here
        
        deque<int> d;
        
        int i=0;
        
        vector<int> ans;
        
        for(i=0;i<k;i++)
        {
            while(!d.empty() && a[d.back()]<=a[i])
            {
                d.pop_back();
            }
            
            d.push_back(i);
        }
        
        ans.push_back(a[d.front()]);
        
        for(;i<n;i++)
        {
            
            if(!d.empty() && d.front()==i-k)
            {
                d.pop_front();
            }
            while(!d.empty() && a[d.back()]<=a[i])
            {
                d.pop_back();
            }
            
            d.push_back(i);
            
            ans.push_back(a[d.front()]);
            
        }

        return ans;
    }
};