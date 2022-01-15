class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    
    vector<int> v;
    
    void inorder(Node *root)
    {
        if(root==NULL)
        {
            return;
        }
        
        inorder(root->left);
        v.push_back(root->data);
        inorder(root->right);
    }
    
    Node* solve(vector<int> &a,int i,int j)
    {
        if(i>=j)
        {
            return NULL;
        }
        
        int m=(i+j)/2;
        
        Node *root = new Node(a[m]);
        root->left = solve(a,i,m);
        root->right = solve(a,m+1,j);
        
        return root;
    }
    vector<int> serialize(Node *root) 
    {
        v.clear();
        inorder(root);
        
        return v;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &a)
    {
       int n=a.size();
 
       return  solve(a,0,n);
    }

};