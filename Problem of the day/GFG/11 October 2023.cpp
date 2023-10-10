
// check for balanced tree


int solve(Node* root,bool &ans){
        if(root==NULL) return 0;
        
        int left = solve(root->left,ans);
        int right = solve(root->right,ans);
        
        if(abs(left-right)>1) ans = false;
        return 1 + max(left,right);
    }
    bool isBalanced(Node *root)
    {
       bool ans = true;
       solve(root,ans);
       return ans;
       
    }