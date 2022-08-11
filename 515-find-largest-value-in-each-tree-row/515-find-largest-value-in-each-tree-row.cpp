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
    vector<int> largestValues(TreeNode* root) {
        vector<int>v;
        if(root==NULL) return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            int maxx=INT_MIN;
            for(int i=0;i<n;i++)
            {  

                auto now=q.front();q.pop();
                maxx=max(now->val,maxx);
                
                    if(now->left) q.push(now->left);
                if(now->right) q.push(now->right);
                

            }v.push_back(maxx);
            
        }
        return v;
    }
};