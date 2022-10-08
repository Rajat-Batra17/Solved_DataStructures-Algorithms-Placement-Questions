TreeNode* searchBST(TreeNode* root, int key) 
    {
        while(root)
        {
            if(root->val==key)
             return root;

            if(root->val>key)
            {
                root=root->left;
            }
            else
            root=root->right; 
        }
        return NULL;
    }
