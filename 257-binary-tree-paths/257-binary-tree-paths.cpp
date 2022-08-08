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
    // vector<string> ans;
    void fn(TreeNode* root, string s, vector<string> &ans)
    {
        if(root==NULL) return ;
        
        if(root->left==NULL&&root->right==NULL)
        {   
            s+=to_string(root->val);
            ans.push_back(s);
        }
        else{
        s+=to_string(root->val);
            s+="->";
            
        }
        fn(root->left,s,ans);
        fn(root->right,s,ans);
        
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        fn(root, "", ans);
        return ans;
    }
};