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
    int minswap(vector<int>&a)
    {
        int n=a.size();
        vector<pair<int,int>>pos(n);
        for(int i=0;i<n;i++){
          pos[i].first=a[i];
            pos[i].second=i;
        }
        sort(pos.begin(),pos.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(pos[i].second==i)continue;
            while(pos[i].second!=i)
            {
                ans++;
                swap(pos[i],pos[pos[i].second]);
            }
        }
        
       return ans; 
    }
    int minimumOperations(TreeNode* root) {
        int cnt=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>v;
            for(int i=0;i<n;i++)
            {
                auto now=q.front();
                v.push_back(now->val);
                q.pop();
                if(now->left)q.push(now->left);
                if(now->right)q.push(now->right);
            }
           cnt+=(minswap(v));
          // v.clear(); 
        }
        return cnt;
    }
};