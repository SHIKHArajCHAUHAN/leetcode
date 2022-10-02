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
    TreeNode* constructBinaryTree(vector<int>& preorder, int preStart, int preEnd, vector<int>& inorder, int inStart, int inEnd, map<int,int> &mp){
        
        if(preStart > preEnd || inStart > inEnd){
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[preStart]); 
        int ele = mp[root -> val]; 
        
        int nEle = ele - inStart; 
        
        root -> left = constructBinaryTree(preorder, preStart +1, preStart + nEle, inorder, inStart, ele-1, mp); 
        root -> right = constructBinaryTree(preorder, preStart +nEle +1, preEnd , inorder,  ele+1, inEnd, mp); 
        
        return root; 
    }
    
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         map < int, int> mp; 
        int preStart = 0, preEnd = preorder.size() -1; 
        int inStart = 0, inEnd = inorder.size() - 1;
        for(int i = inStart; i<=inEnd; i++){
            mp[inorder[i]] = i ; 
        }
        
        return constructBinaryTree(preorder,preStart, preEnd, inorder, inStart, inEnd, mp ); 
    }
};