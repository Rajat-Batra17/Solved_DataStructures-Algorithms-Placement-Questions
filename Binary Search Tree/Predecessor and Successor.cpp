/* BST Node
struct Node
{
	int key;
	struct Node *left, *right;
};
*/

/*
Question: Predecessor and Successor
Link:https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1
*/
// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(root==NULL)
     return;
    
    Node* curr=root;
    //for successor: successor is just larger element
    while(root)
    {
        if(root->key <= key) // can't be a successor
               { root=root->right;}
        else if(root->key>key)
            { suc=root; root=root->left;}
        
    }
    
    // predecessor: it is just smaller element
     while(curr)
    {
        if(curr->key < key) 
         { pre=curr; curr=curr->right;} // can be a potential predecessor 
        else if(curr->key>=key) // can't be a potential predecessor 
            curr=curr->left;
    }
    

}

