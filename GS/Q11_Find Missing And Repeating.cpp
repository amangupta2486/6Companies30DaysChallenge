// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *a, int n) {
        // code here
    vector<int> v(100005,0);
    
    for(int i=0;i<n;i++)
    {
        v[a[i]]++;
    }
    
    
    int c=0,d=0;
    
    for(int i=1;i<=n;i++)
    {
        if(v[i]==0)
        {
            c=i;
            break;
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        if(v[i]==2)
        {
            d=i;
            break;
        }
    }
    
    int *b=new int(n);
    
    b[0]=d;
    b[1]=c;
    
    return b;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends