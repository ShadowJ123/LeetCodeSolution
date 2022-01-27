vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>st;
        if(root)
        st.push(root);
        if(!st.empty()){
            while(!st.empty()){
                //TreeNode* temp=st.top();
                root=st.top();
                v.push_back(root->val);
                st.pop();
                if(root->right)
                    st.push(root->right);
                if(root->left)
                   st.push(root->left);
            }
        }
        
        return v;
    }