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
    TreeNode* reverseOddLevels(TreeNode* root) {
     if(root==NULL) return NULL; 
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        while(q.size()>0)
        {int n=q.size();
            vector<int>v;
         vector<TreeNode*>vec;
           for(int i=0;i<n;i++)
           {
               auto now=q.front();q.pop();
               v.push_back(now->val);
               vec.push_back(now);
               if(now->left) q.push(now->left);
               if(now->right) q.push(now->right);
               
           }
         if(level%2!=0)
         {
             reverse(v.begin(),v.end());
             for(int i=0;i<v.size();i++)
             {
                 vec[i]->val=v[i];
             }
         }
         level++;
        }
        return root;
    }
};