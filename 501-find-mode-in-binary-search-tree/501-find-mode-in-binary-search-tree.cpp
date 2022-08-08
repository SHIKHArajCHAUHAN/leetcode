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
    void findMode1(TreeNode* root,map<int,int>&mp) {
        if(root==NULL) return ;
        mp[root->val]++;
        findMode1(root->left,mp);
        findMode1(root->right,mp);
        
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>v;
        map<int,int>mp;
        findMode1(root,mp);
        int maxx=0;
        for(auto i:mp)
        {
        maxx=max(maxx,i.second);
        }
        for(auto i:mp){
            if(i.second==maxx)
            v.push_back(i.first);
            
        }if(v.size()==0) v.push_back(0);
return v;
    }
};