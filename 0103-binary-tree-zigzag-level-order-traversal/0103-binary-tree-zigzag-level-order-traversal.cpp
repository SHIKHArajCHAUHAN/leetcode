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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>v;
        if(root==NULL) return v;
        vector<int>v1,v2;
        queue<TreeNode*>q;
        q.push(root);
        int level=1;;
        while(!q.empty())
        {
            int n=q.size();
            
            for(int i=0;i<n;i++){
           auto now=q.front();q.pop();
               v1.push_back(now->val); 
            if(now->left) q.push(now->left);
            if(now->right) q.push(now->right);}
            v2=v1;
            reverse(v2.begin(),v2.end());

            if(level%2==1) v.push_back(v1);
            else  v.push_back(v2);
           level++; v1={};
            v2={};
        }
        return v;
    }
};