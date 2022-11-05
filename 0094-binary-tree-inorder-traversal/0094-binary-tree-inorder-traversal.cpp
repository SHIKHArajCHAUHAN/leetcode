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
  /*  void inorderTraversal(TreeNode* root,vector<int>&ans){
        if(root==NULL)
            return;
        inorderTraversal(root->left,ans);
        ans.push_back(root->val);
        inorderTraversal(root->right,ans);
    }*/
public:
    vector<int> inorderTraversal(TreeNode* root) {
    vector<int>ans;
       if(root==NULL) return ans;
        stack<TreeNode*>s;
        TreeNode *node=root;
       // s.push(node);
        while(1)
        {
            if(node!=NULL)
            {
                s.push(node);
                node=node->left;
                
            }
            else
            {
                if(s.empty()==true)break;
                node=s.top();
                s.pop();
                ans.push_back(node->val);
                node=node->right;
            }
        }
        return ans;
    }
};