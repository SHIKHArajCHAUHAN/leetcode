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
           double n = q.size();
            double sum=0;
//vector<int> level;
            for(int i=0; i<n; i++)
            {
                auto now = q.front();
                q.pop();
                sum+=now->val;
             
                if(now->left) q.push(now->left);
                if(now->right) q.push(now->right);
            }
            v.push_back(sum/n);
            
        }
        return v;
        
    }
};