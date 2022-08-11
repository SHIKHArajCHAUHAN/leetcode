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
class Solution { int count;
public: void fn(TreeNode *root,vector<int>v)
{
    if(root==NULL) return;
    bool greater=0;
    for(auto i:v)
    {
        if(i>root->val){ greater=1;
                        break;}
    }if(greater==0) count++;
    v.push_back(root->val);
    fn(root->left,v);
    fn(root->right,v);
}
    int goodNodes(TreeNode* root) {
        fn(root,{});
        return count;
    }
};