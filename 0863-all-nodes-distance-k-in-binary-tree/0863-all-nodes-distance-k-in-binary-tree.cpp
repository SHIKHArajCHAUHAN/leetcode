/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
 void MakeParentLink(TreeNode* node,unordered_map<TreeNode*,TreeNode*>&m){
        queue<TreeNode*>q;
        q.push(node);
        while(!q.empty()){
            TreeNode* p=q.front();
            q.pop();
            if(p->left){
                m[p->left]=p;
                q.push(p->left);
            }
            if(p->right){
                m[p->right]=p;
                q.push(p->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>mp;
        MakeParentLink(root,mp);
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode*>q;
        q.push(target);
        visited[target]=1;
        int count=0;
        while(!q.empty()){
            int s=q.size();
            if(count++ == k)break;
            for(int i=0;i<s;i++){
                TreeNode* n=q.front();
                q.pop();
                if(n->left && !visited[n->left]){
                    visited[n->left]=1;
                    q.push(n->left);
                }
                if(n->right && !visited[n->right]){
                    visited[n->right]=1;
                    q.push(n->right);
                }
                if(mp[n] && !visited[mp[n]]){
                    visited[mp[n]]=1;
                    q.push(mp[n]);
                }
            }
        }
        vector<int>answer;
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            answer.push_back(temp->val);
        }
        return answer;
    }
};