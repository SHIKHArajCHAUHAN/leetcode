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
class Solution {priority_queue<int,vector<int>,greater<int>>pq;
public:
                void fn(TreeNode*root)
                {
                    if(root==NULL) return;
                    pq.push(root->val);
                    fn(root->left);
                    fn(root->right);
                }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        fn(root1);
        fn(root2);
        vector<int>v;
        while(!pq.empty())
        {
            v.push_back(pq.top());pq.pop();
        }
        return v;
    }
};