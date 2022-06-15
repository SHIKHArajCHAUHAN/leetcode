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
public:
    void pre_trav(TreeNode*root,vector<TreeNode*>&ankit)
    {
        if(root==NULL) return;
        ankit.push_back(root);
        pre_trav(root->left,ankit);
        pre_trav(root->right,ankit);
    }
    
    void flatten(TreeNode* root) {
        if(root==NULL) return;
      vector<TreeNode*>ankit; 
        
        pre_trav(root,ankit);
        int n=ankit.size();
       for(int i=0;i<n-1;i++) 
       {
           ankit[i]->right=ankit[i+1];
           ankit[i]->left=NULL;
       }
           ankit[n-1]->right=NULL;
        ankit[n-1]->left=NULL;
        root=ankit[0];
    }
    
};