vector<vector<int>> levelOrder(TreeNode* root) {
        stack<TreeNode*>st,st2;
         vector<vector<int>>v;
        TreeNode* curr=root;
        if (curr) {
            st.push(curr);
            st2.push(curr);
            v.push_back(vector<int>());
            v[0].push_back(curr->val);
        }
        int count = 0;
        while (st.size() != 0 || st2.size()!=0) {
            count++;
            TreeNode* temp = st.top();
            if (count != 1) {
                v.push_back(vector<int>());
                while (st.size()!=0) {
                    temp = st.top();
                    v[count - 1].push_back(temp->val);
                    st2.push(temp);
                    st.pop();
                }
            }
            while (st2.size() != 0) {
                TreeNode* temp2 = st2.top();
                if (count == 1) {
                    st.pop();
                }
                if(temp2->right)
                    st.push(temp2->right);
                if(temp2->left)
                    st.push(temp2->left);
                st2.pop();
            }
        }
        return v;
    }