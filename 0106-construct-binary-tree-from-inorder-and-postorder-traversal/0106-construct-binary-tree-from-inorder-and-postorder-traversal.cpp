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
    TreeNode* fn(vector<int>&inorder,int is,int ie,vector<int>&postorder,int ps,int pe,map<int,int>&mp)
    {
        if(ps>pe||is>ie)return NULL;
        TreeNode* root=new TreeNode(postorder[pe]);
        int inroot=mp[postorder[pe]];
        int numleft=inroot-is;
        root->left=fn(inorder,is,inroot-1,postorder,ps,ps+numleft-1,mp);
         root->right=fn(inorder,inroot+1,ie,postorder,ps+numleft,pe-1,mp);
        return root;
        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int m=inorder.size();
        int n = postorder.size();
        if(n!=m) return NULL;
        map<int,int>mp;
        for(int i = 0; i<inorder.size(); i++)
        {
            mp[inorder[i]] = i;
        }

        return fn(inorder,0,m-1, postorder,0,n-1,mp); 
    }
};