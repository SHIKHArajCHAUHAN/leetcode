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
    void fn(TreeNode* root,vector<int>&v)
    {
        if(root==NULL) return;
        
                    v.push_back(root->val);
                    fn(root->left,v);
                    fn(root->right,v);


    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>v;
       fn(root,v);
        sort(v.begin(),v.end());
        int ans=0;
        int minn=INT_MAX;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]!=v[i+1])
            {ans=v[i+1]-v[i];
             minn=min(ans,minn);}
        }
        return minn;
        
    }
};