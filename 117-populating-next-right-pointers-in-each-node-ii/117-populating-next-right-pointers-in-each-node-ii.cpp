/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
       if(root==NULL) return NULL;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<Node*>lebel;
            for(int i=0;i<n;i++)
            {
                auto now=q.front();
                q.pop();
                lebel.push_back(now);
                if(now->left){
                    q.push(now->left);
                }
                if(now->right){q.push(now->right);}
            }
            for(int i=0;i<n-1;i++)
            {
                lebel[i]->next=lebel[i+1];
            }
            
        }
        return root;
    }
};