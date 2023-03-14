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
   
    void fn(TreeNode*root,string str,vector<string>&store)
    {
        if(root==NULL)return;
        str.push_back((root->val)+'a');
        if(root->left==NULL&&root->right==NULL)
        { string s=str;
           reverse(str.begin(),str.end());
          store.push_back(str);return;
        }
       if(root->left) fn(root->left,str,store);//agr left exist kre toh
       if(root->right) fn(root->right,str,store);//agr right exist kre toh
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string>store;
       fn(root,"",store); 
        sort(store.begin(),store.end());
        return store[0];
    }
};