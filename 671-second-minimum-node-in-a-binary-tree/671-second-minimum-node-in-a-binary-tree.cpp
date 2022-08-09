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
    void fn(TreeNode*root,set<int>&v)
    {
        if(root==NULL) return ;
        fn(root->left,v);
        v.insert(root->val);
        fn(root->right,v);
    }
    int findSecondMinimumValue(TreeNode* root) {
       set<int>v;
        vector<int>v1;
        fn(root,v);
        int ans=-1;
        int n=v.size();
        if(n>=2){
        for(auto i:v)
        {
            v1.push_back(i) ;
            
        } 
        return v1[1];
    }return -1;
   
    }
};