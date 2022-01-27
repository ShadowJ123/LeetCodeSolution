vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>st;
        TreeNode* curr = root;
        while (!st.empty() || curr != NULL) {
            while (curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            st.pop();
            v.push_back(curr->val);
            curr = curr->right;
        }
        return v;
    }