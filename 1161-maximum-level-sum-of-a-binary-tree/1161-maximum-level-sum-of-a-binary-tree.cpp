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
    int maxLevelSum(TreeNode* root) {
        int maxx=INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        int ans=0;
        int j=1;
        while(!q.empty())
        {
            int sum=0;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                auto now=q.front();
                q.pop();
                sum+=now->val;
            if(now->left) q.push(now->left);
            if(now->right) q.push(now->right);
            }
             if(sum>maxx)
            {
                maxx=sum;
                ans=j;
            }
            j++;
        }
        return ans;
    }
};