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
public: /*TreeNode* fn(vector<int>&v,int start,int end)
{if(start>end) return NULL;
    
    int mid=(end+start)/2;
    TreeNode *node=new TreeNode (v[mid]);
    node->left=fn(v,start,mid-1);
    node->right=fn(v,mid+1,end);
    return node;
}*/
    
    TreeNode* fn(TreeNode* root,int value)
    {
        if(root==NULL) return new TreeNode(value);
        if(root->val>value)  root->left=fn(root->left,value);
        else root->right=fn(root->right,value);
        return root;
        
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
      /*  sort(preorder.begin(),preorder.end());
        vector<int>v;
      return fn(preorder,0,preorder.size()-1);*/
        TreeNode* root=NULL;
        for(int i=0;i<preorder.size();i++)
        {
           root=fn(root,preorder[i]); 
        }
        return root;
        
    }
};