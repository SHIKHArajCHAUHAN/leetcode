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
    int fn(TreeNode*root)
    {
        if(root==NULL) return 0;
        return max(fn(root->right),fn(root->left))+1;
    }
    vector<vector<string>> printTree(TreeNode* root) {
       int h=fn(root)-1;
        int l=0;
        int c=pow(2,h+1)-1;
        vector<vector<string>>ans;
        queue<pair<TreeNode*,int>>q;
        int mid=(c-1)/2;
        q.push({root,mid});
        while(!q.empty())
        {
            int n=q.size();
       vector<string>v(c,"");
            for(int i=0;i<n;i++)
            {
                auto now=q.front();
                auto node=now.first;
                auto col=now.second;
                v[col]=to_string(node->val);
                q.pop();
                if(node->left)q.push({node->left,col-pow(2,h-l-1)});
                if(node->right)q.push({node->right,col+pow(2,h-l-1)});
            }ans.push_back(v);l++;
        }
        return ans;
    }
};