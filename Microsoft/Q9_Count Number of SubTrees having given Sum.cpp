int c,target;

int solve(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    int sum=root->data + solve(root->left) + solve(root->right);
   
    if(sum==target)
    {
        c++;
    }
    
    return sum;
}

int countSubtreesWithSumX(Node* root, int x)
{
    c=0;
    target=x;
	solve(root);
	return c;
}