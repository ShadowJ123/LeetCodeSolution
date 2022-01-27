 bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q!=NULL){
            return false;
        }
        if(p==NULL && q==NULL)
            return true;
        if(p!=NULL && q==NULL)
            return false;
        if(p->val!=q->val)
            return false;
        bool temp=isSameTree(p->left,q->left);
        bool temp2=isSameTree(p->right,q->right);
        if(temp && temp2)
            return true;
        else
            return false;
    }