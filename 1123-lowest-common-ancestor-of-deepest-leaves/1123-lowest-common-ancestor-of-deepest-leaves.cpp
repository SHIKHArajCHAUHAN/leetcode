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
     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(p==root||q==root) return root;
        TreeNode *leftLCA=lowestCommonAncestor(root->left,p,q);
        TreeNode *rightLCA=lowestCommonAncestor(root->right,p,q);
        if(leftLCA&&rightLCA) return root;
        if(leftLCA !=NULL) return leftLCA;
        return rightLCA;
        
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        vector<TreeNode*>v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<TreeNode*>temp;
            for(int i=0;i<n;i++)
            {
                auto node=q.front();
                q.pop();
                temp.push_back(node);
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            v=temp;
        }
        if(v.size()==1) return v[0];
        else return lowestCommonAncestor(root,v[0],v[v.size()-1]);
        
    }
};