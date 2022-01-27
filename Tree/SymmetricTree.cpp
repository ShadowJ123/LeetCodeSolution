 bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return isSymmetricTrees(root->left,root->right);
    }
    bool isSymmetricTrees(TreeNode* a, TreeNode* b)
    {
        if(a==NULL && b!=NULL)
            return false;
        if(a!=NULL && b==NULL)
            return false;
        if(a==NULL && b==NULL)
            return true;
        if(a->val!=b->val)
            return false;
        cout<<" 1 "<<a->val<<b->val;
        bool temp= isSymmetricTrees(a->right,b->left);
         bool temp2= isSymmetricTrees(a->left,b->right);
        if(temp && temp2)
            return true;
        else
            return false;
    }