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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
//         sort(descriptions.begin(),descriptions.end());
//          TreeNode* node=new TreeNode (descriptions[0][0]);
          
//         for(int i=1;i<descriptions.size();i++)
//         {
//             if(descriptions[i][0]!=descriptions[i-1][0])
//             {
//             TreeNode* temp=new TreeNode (descriptions[i][0]);
//                 if(descriptions[i][2])
//                 {
//                     temp->left=node;
        
//                 }
            
         map<int,TreeNode*> mp;
        set<int> ch;
        for(auto d:descriptions){
            TreeNode *par,*child; 
            if(mp.find(d[0])==mp.end()){
                par=new TreeNode(d[0]);
                mp[d[0]]=par;
            }
            if(mp.find(d[1])==mp.end()){
                child=new TreeNode(d[1]);
                mp[d[1]]=child;
            }
            ch.insert(d[1]);
            par=mp[d[0]];
            child=mp[d[1]];
            if(d[2]==1){
                par->left=child;
            }
            else{
                par->right=child;
            }
        }
        for(auto d:descriptions){
            if(ch.find(d[0])==ch.end()){
                return mp[d[0]];
            }
        }
        return NULL;
    }
};