/*
Question:Search a node in BST
Link: https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1

Approach: 
In BST node at left of root is always smaller than root
and node at the right of root is always greater than root

*/
bool search(Node* root, int x) {
    
    if(root==NULL)
     return 0;
    
    while(root)
    {
        if(x==root->data)
         return 1;
        
        if(x<root->data)
         root=root->left;
        else
         root=root->right;
    }
    return 0;
}

