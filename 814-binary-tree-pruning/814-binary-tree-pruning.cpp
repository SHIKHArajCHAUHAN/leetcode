/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public: TreeNode* fn(TreeNode *root)
{
   if(root==NULL) return NULL;
   root->left= fn(root->left);
   root->right= fn(root->right);
    if(root->right==NULL&&root->left==NULL&&root->val==0) 
    {delete(root);
     return NULL;}
   // if(root->left!=NULL&&root->left->val==0) delete root->left;
    return root;
    
}
    
    
    
    
    
    
    
    
    
    
    
    
    
//     if(root==NULL) return NULL;
//    /* if(root->left==NULL&& root->right==NULL&& root->val==0)
//     {
//         free(root);
//     }*/
//    root->left= fn(root->left);
//     root->right=fn(root->right);
//    if(root->left==NULL && root->right==NULL && root->val==0)
//     {
//         delete(root);
//        return NULL;
//     } 
//     return root;
// }
    TreeNode* pruneTree(TreeNode* root) {
     return  fn(root);
        
    }
};