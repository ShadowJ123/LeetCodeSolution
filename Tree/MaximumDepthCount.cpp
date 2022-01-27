 int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int count=0;
        return maxDepthCount(root,count);
    }
    int maxDepthCount(TreeNode* root,int count ){
        if(root==NULL)
            return count;
        else
            count++;
        cout<<" a "<<root->val<<count<<endl;
        int temp=maxDepthCount(root->right,count);
        int temp2=maxDepthCount(root->left,count);
        if(temp>temp2)
            return temp;
        else
            return temp2;
    }