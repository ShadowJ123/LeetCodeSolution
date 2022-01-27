int minDiffInBST(TreeNode* root) {
        int diff=1000,minDiff=100000;
        stack<TreeNode*>st;
        TreeNode* curr=root;
        vector<int>v;
        while(!st.empty() || curr!=NULL){
             while(curr!=NULL){
                st.push(curr);
                
                 if(curr->left!=NULL)
                     diff=curr->val-curr->left->val;
                 diff=diff<0?-1*diff:diff;
                 cout<<" a "<<diff;
                 if(diff<minDiff)
                     minDiff=diff;
                 if(minDiff==1)
                     return 1;
                curr=curr->left;
                 
            }
            cout<<endl;
            curr=st.top();
            v.push_back(curr->val);
            st.pop();
            if(curr->right!=NULL)
                 diff=curr->val-curr->right->val;
             diff=diff<0?-1*diff:diff;
             cout<<" 2a "<<diff<<endl;
             if(diff<minDiff)
                 minDiff=diff;
            if(minDiff==1)
                     return 1;
            curr=curr->right;
        }
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                diff=v[i]>v[j]?v[i]-v[j]:v[j]-v[i];
                if(diff<minDiff)
                    minDiff=diff;
                if(minDiff==1)
                    return 1;
            }
        }
        return minDiff;
    }