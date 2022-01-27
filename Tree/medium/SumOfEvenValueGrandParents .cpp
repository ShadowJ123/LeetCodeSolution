int sumEvenGrandparent(TreeNode* root) {
        stack<TreeNode*>st;
        int sum=0;
        TreeNode *curr=root;
        while(curr!=NULL || !st.empty()){
            while(curr){
                st.push(curr);
                if(curr->left){
                    if(curr->left->left && curr->val%2==0)
                        sum+=curr->left->left->val;
                    if(curr->left->right && curr->val%2==0)
                        sum+=curr->left->right->val;
                }
                if(curr->right){
                    if( curr->right->right && curr->val%2==0)
                        sum+=curr->right->right->val;
                    if( curr->right->left && curr->val%2==0)
                        sum+=curr->right->left->val;
                }
                curr=curr->left;
            }
            curr=st.top();
            st.pop();
            curr=curr->right;
        }
        return sum;
    }