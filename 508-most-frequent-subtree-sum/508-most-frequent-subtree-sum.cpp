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
public: int fn(TreeNode* root, map<int,int>&mp)
{
    if(root==NULL) return  0;
    if(root->left==NULL&&root->right==NULL){mp[root->val]++; return root->val;}

        root->val += fn(root->left,mp)+fn(root->right,mp);
        mp[root->val]++;
       return root->val;
}
    vector<int> findFrequentTreeSum(TreeNode* root) {
       vector<int>v;
        map<int,int>mp;
        fn(root,mp);
        vector<pair<int,int>>v1;
        for(auto i:mp)
        {
           v1.push_back({i.second,i.first}); 
        }
        sort(v1.begin(),v1.end());
        int maxx = v1[mp.size()-1].first;
        for(int i=v1.size()-1;i>=0;i--)
        {
         if(v1[i].first==maxx) v.push_back(v1[i].second);
        }
        return v;
    }
};