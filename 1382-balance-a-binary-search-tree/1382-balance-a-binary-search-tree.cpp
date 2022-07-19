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
    vector<int>arr;
    void inorder( TreeNode*root,vector<int>&arr)
    {
        if(root==NULL) return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    TreeNode *sortarr(vector<int>&arr,int start,int end)
    {
        if(start>end) return NULL;
        int mid=(start+end)/2;
        TreeNode *root=new TreeNode(arr[mid]);
        root->left=sortarr(arr,start,mid-1);
        root->right=sortarr(arr,mid+1,end);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        int start,end;
        inorder(root,arr);
      return sortarr(arr,0,arr.size()-1);
        
    }
};