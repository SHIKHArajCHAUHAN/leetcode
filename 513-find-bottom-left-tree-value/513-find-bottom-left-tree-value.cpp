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
    int findBottomLeftValue(TreeNode* root) {
       queue<TreeNode*>q;
        q.push(root);
        int ans;
        while(!q.empty())
        {
          //  vector<TreeNode*>level;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                auto now=q.front(); q.pop();
               // level.push_back(now);
                if(i==0) ans=now->val;
                if(now->left){q.push(now->left);}
                if(now->right){q.push(now->right);}
            }
        
            
        }
        return ans;
    }
};