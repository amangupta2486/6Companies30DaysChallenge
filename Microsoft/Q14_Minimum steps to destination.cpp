class Solution{
public:
    int minSteps(int d){
        
         int ans=0;
        int i=1,c=0;
        
        while(true)
        {
            ans+=c;
            c++;
            if(ans==d)
            {
                return c-1;
                break;
            }
            
            if(ans>d && (ans-d)%2==0)
            {
                return c-1;
                break;
            }
            
        }

        return 0;
    }
};
