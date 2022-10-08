/*
Question:Check whether BST contains Dead End

Link:https://practice.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1

Approach:

1. 
Keep in mind ,in root left; we can have numbers only less than root; and to the root's right we have
numbers greater than root.

2.
Dead end can only be a left node

3. 
If a leaf node has value x; to minimum higher value it can have is(x+1) and maximum smaller value it can 
have is (x-1). If both are already presnt in the tree then we can say that all numbers less than (x-1) 
will go to the left of (x-1) and this leaf node is to the right of (x-1) adn similarly all the numbers
greater than (x+1) will go right of (x+1) and this number is at the left of (x+1).Hence no number can 
be placed under this node x; if both (x-1) and (x+1) are already present in the tree.
*/
void inorder(Node *root,set<int>&all,set<int>&leaf)
{
    if(root==NULL)
     return;
     
    if(root->left==NULL and root->right==NULL)
     leaf.insert(root->data);
     
    inorder(root->left,all,leaf);
    all.insert(root->data);
    inorder(root->right,all,leaf);
    
}
bool isDeadEnd(Node *root)
{
    if(root==NULL)
     return false;
     
    set<int>all;
    set<int>leaf;
    inorder(root,all,leaf);
    all.insert(0); // to handle case of 1;
    for(auto x:leaf)
    {
        if( (all.find(x-1)!=all.end()) and (all.find(x+1)!=all.end()) )
         return true;
    }
    return false;
    
}
