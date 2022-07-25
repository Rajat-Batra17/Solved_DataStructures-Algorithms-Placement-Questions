/*

Question: Minimum element in BST

Link: https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1

Approach: Minimum element will always be in the leftmost corner of the tree 

*/
int minValue(Node* root) {
    
    if(root==NULL)
     return -1;
    
    while(root->left)
    {
        root=root->left;
    }
    return root->data;
}
