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
    bool isCousins(TreeNode* root, int x, int y) {
         queue<TreeNode*> q;
        
        q.push(root);
        
        unordered_map<int , int> mp;
        
        while(!q.empty())
        {
            int n=q.size();
            while(n--)
            {
                TreeNode* curr=q.front();
                q.pop();
                
                if(curr->left)
                {
                    mp[curr->left->val]=curr->val; 
                    q.push(curr->left);      
                }
                
                if(curr->right)
                {
                    mp[curr->right->val]=curr->val;
                    q.push(curr->right);
                }
            }
            if(mp.find(x)!=mp.end() && mp.find(y)!=mp.end() && mp[x]!=mp[y])
            {
                return true;
            }
            mp.clear();
        }
        
        return false;
               
    }
};