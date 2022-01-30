class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    
    int solve(Node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int l=0,r=0;
        if(root->left!=NULL)
        l=+root->left->data+solve(root->left);
        
        if(root->right!=NULL)
        r=root->right->data+solve(root->right);
        
        root->data= l+r;
        
        return l+r;
    }
    void toSumTree(Node *root)
    {
       solve(root);
       
    }
};