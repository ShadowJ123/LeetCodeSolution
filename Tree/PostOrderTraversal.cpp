vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>st,st2;
        TreeNode* curr = root;
        while (!st.empty() || curr != NULL) {
            while (curr != NULL) {
                st.push(curr);
                st2.push(curr);
                curr = curr->right;
            }
            curr = st.top();
            st.pop();
            //cout << curr->data << " ";
            curr = curr->left;
        }
        while (!st2.empty()) {
            TreeNode* temp = st2.top();
            v.push_back(temp->val);
            st2.pop();
        }
        return v;
    }