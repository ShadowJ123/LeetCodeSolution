TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        stack<TreeNode*>st;
        stack<TreeNode*>stc;
        TreeNode* curr=original;
        TreeNode* res=cloned;
        while(curr!=NULL || !st.empty()  ){
            while(curr!=NULL){
                if(curr==target){
                    return res;
                }
                st.push(curr);
                stc.push(res);
                curr=curr->left;
                res=res->left;
            }
            curr=st.top();
            res=stc.top();
            st.pop();
            stc.pop();
            curr=curr->right;
            res=res->right;
        }
        return res;
    }