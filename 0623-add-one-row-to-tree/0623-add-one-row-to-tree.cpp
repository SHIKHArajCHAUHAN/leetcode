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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
           if (depth == 1) return new TreeNode(val, root, NULL);
         queue<TreeNode*> q;
         q.push(root);
         while(!q.empty()){
             int sz= q.size();
             for(int i = 0;i<sz;i++){
                 auto ele = q.front();
                 q.pop();
                 if(depth == 2){
                     TreeNode* node1 = new TreeNode(val,ele->left,NULL);
                     TreeNode* node2 = new TreeNode(val,NULL,ele->right);
                     ele->left = node1;
                     ele->right = node2;
                 }else{
                     if(ele->left)q.push(ele->left);
                     if(ele->right)q.push(ele->right);
                 }
             }
             --depth;
         }
        return root;
//       int level=1;
//         queue<TreeNode*>q;
//         q.push(root);
//         if(depth==1)
//         { root->val=val;return root;}
//         while(!q.empty())
//         {
//             int n=q.size();
           
//             for(int i=0;i<n;i++)
//             {
//                 auto now=q.front();
//                 q.pop();
//                 if(level+1==depth)
//                 {
//                     if(now->left)
//                     {
//                         auto pre=now->left;
//                         TreeNode* x=new TreeNode(val);
//                         now->left=x;
//                         x->left=pre;
//                         q.push(pre);
//                     }
//                     if(now->right)
//                     {
//                         auto pre=now->right;
//                         TreeNode* x=new TreeNode(val);
//                         now->right=x;
//                         x->right=pre;
//                         q.push(pre);
//                     }
//                 }
//                 else if(level+1<depth)
//                 {
//                     if(now->left)
//                     {
                
//                         q.push(now->left);
//                     }
//                     if(now->right)
//                     {
                        
//                         q.push(now->right);
//                     }
//                 }
//             }
        
//             level++;
//         }
        
//         return root;
    }
};