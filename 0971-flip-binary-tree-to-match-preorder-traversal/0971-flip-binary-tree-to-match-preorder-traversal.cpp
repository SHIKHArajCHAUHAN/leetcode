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
     int i;
    vector<int>ans;
    bool helper(TreeNode* root, vector<int>& voy){
        if(root==NULL)return true;
        if(root->val!=voy[i++])return false;
        if(root->left && root->left->val!=voy[i]){
            ans.push_back(root->val); 
            return helper(root->right,voy) && helper(root->left,voy); 
        }
        else{
            return helper(root->left,voy)&& helper(root->right,voy);  
        }
    }
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voy) {
       
       return helper(root,voy)?ans:vector<int>{-1};

        

    }
};