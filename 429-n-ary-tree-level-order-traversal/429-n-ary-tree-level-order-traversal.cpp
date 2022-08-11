/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>v;
        if(root==NULL) return v;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>v1;
        for(int i=0;i<n;i++){
                auto now=q.front();
                q.pop();
                v1.push_back(now->val);
                for(auto i:now->children)
                
                    if(i)q.push(i);
            
                
        }
        v.push_back(v1);}
        return v;
        
    }
};