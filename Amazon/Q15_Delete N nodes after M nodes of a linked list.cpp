class Solution
{
    public:
    void linkdelete(struct Node  *h, int m, int n)
    {
        //Add code here   
        
        Node *q=h;
        int r=1,mul=1;
        
        while(q!=NULL && q->next!=NULL)
        {
            if(r==m*mul)
            {
            int k=n;
            
            Node* p = q;
            
            while(k>0 && q->next!=NULL)
            {
               q=q->next;
               k--;
            }
            
            p->next = q->next;
            mul++;
            }
            
            r++;
            q=q->next;
            
        }
    }
};