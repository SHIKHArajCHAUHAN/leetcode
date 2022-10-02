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
    int widthOfBinaryTree(TreeNode* root) {
     /*   if(!root)
            return 0;
        int ans = 0;
        queue<pair<TreeNode *, int>>q;
        q.push({root, 0});
        
        while(!q.empty()){
            int n = q.size();
           int minn= q.front().second;
            int first, last;
            for(int i = 0; i < n; i++){
            int cur_id=q.front().second-minn;
              TreeNode* now=q.front().first;
                q.pop();
                if(i==0)first=cur_id;
                if(i==n-1) last=cur_id;
                if(now-> left){
                    q.push({now -> left, cur_id * 2+1});
                }
                if(now-> right){
                    q.push({now ->right, cur_id * 2 + 2});
                }
            }
            ans = max(ans, last-first+ 1);
        }
        return ans;*/
         long long ans = 0;
        if(!root)
            return ans;
        queue<pair<TreeNode *, long long>>q;
        q.push({root, 0});
        long long mn = 0;
        while(!q.empty()){
            int n = q.size();
            mn = q.front().second;
            long long mx = 0;
            for(int i = 0; i < n; i++){
                auto pr = q.front();
                auto node = pr.first;
                long long val = pr.second;
                val -= mn;
                if(i == n - 1){
                    mx = val;
                }
                q.pop();
                if(node -> left){
                    q.push({node -> left, val * 2});
                }
                if(node -> right){
                    q.push({node ->right, val * 2 + 1});
                }
            }
            ans = max(ans, mx + 1);
        }
        return ans;
    }
};