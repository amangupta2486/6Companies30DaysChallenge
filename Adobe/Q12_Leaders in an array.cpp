class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){

        vector<int> v;
          
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]<a[i+1])
            {
                a[i]=a[i+1];
            }
            else
            {
                v.push_back(a[i]);
            }
        
        }
         
        reverse(v.begin(),v.end());
        

        if(n>2)
        {
            v.push_back(a[n-1]);
        }
        
        return v;
        
    }
};