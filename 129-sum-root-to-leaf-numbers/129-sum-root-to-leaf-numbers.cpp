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
class Solution { int sum=0;
public: void fn(TreeNode* root,vector<int>v)
{
    if(!root) return;
    v.push_back(root->val);
    if(!root->left&&!root->right)
    { for(int i=0;i<v.size();i++)
        {
          sum+=v[i]*pow(10,v.size()-i-1) ; 
        }
    }
    fn(root->left,v);
    fn(root->right,v);
}
    int sumNumbers(TreeNode* root) {

       fn(root,{}) ;
        return sum;
    }
};