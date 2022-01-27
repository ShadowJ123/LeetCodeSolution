 int sumOfLeftLeaves(TreeNode* root) {
        stack<TreeNode*>st;
        TreeNode* curr=root;int count=0;
        //cout<<" 2a "<<curr->val;
        while(!st.empty() || curr!=NULL ){
            while(curr!=NULL){
                st.push(curr);
                if(curr->left!=NULL ){
                    TreeNode *temp33=st.top();
                    if(curr->left->left!=NULL){
                        //cout<<" issue "<<curr->val<<endl;
                    }
                    else
                        cout<<" awesome "<<curr->left->val<<endl;
                    if(curr->left->left==NULL && curr->left->right==NULL)
                        count+=curr->left->val;
                }
                curr=curr->left;
            }
            TreeNode *temp3=st.top();
            //cout<<" 3a "<<temp3->val;
            curr=st.top();
            st.pop();
            curr=curr->right;
        }
        return count;
    }