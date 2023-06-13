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
     unordered_map<int,vector<int>>graph; 
    
    void makegraph(TreeNode* root){
        
        queue<pair<TreeNode* ,int>>q;
        q.push({root,-1});
        while(q.size()){
            auto it = q.front(); q.pop();
            if(it.second!=-1){
                graph[it.first->val].push_back(it.second);
                graph[it.second].push_back(it.first->val);
            }
            
            if(it.first->left)
                q.push({it.first->left,it.first->val});
            if(it.first->right)q.push({it.first->right,it.first->val});
        }
        
    }
    
    int amountOfTime(TreeNode* root, int start) {
        int time =0;
        makegraph(root);
        queue<int>q;
        q.push(start);
        unordered_map<int,bool>vis;
        vis[start]=true;
        while(q.size()){
            time++;
            int n= q.size();
            while(n--){
                auto p = q.front();q.pop();
                for(auto i:graph[p]){
                    if(!vis[i]){
                        q.push(i);
                        vis[i]=true;
                    }
                }
            }
        }
        
        return time-1;
        
    }
};