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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
        if(root==NULL) return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
           int n = q.size();
            vector<int> level;
            for(int i=0; i<n; i++)
            {
                auto now = q.front();
                q.pop();
                level.push_back(now->val);
                if(now->left) q.push(now->left);
                if(now->right) q.push(now->right);
            }double sum=0;
            for(int i=0;i<n;i++)
            {
                sum+=level[i];
            }
            v.push_back(sum/n);
            
        }
        return v;
        
    }
};