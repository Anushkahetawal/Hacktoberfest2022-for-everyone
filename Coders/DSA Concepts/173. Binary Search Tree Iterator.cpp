 stack <TreeNode* > st;
    BSTIterator(TreeNode* root) {
        pushall(root);
    }
    
    int next() {
        TreeNode* tp=st.top();
        st.pop();
        pushall(tp->right);
        return tp->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
    void pushall(TreeNode* root){
        for(;root!=NULL;st.push(root) , root=root->left);
    }
