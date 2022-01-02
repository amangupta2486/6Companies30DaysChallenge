#include <bits/stdc++.h>

class Solution {
public:
    string gcdOfStrings(string a, string b) {
        
        int n=a.size();
        int m=b.size();
        
        if(a+b==b+a)
        {
           int i = __gcd(n,m);
           
            return b.substr(0,i);
        }
        
        return "";
    }
};