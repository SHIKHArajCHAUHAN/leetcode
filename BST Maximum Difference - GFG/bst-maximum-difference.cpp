//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
Node *rootTOtarget(Node *root,int & sum1,int target)
{
    if(root==NULL) return NULL;
    sum1+=root->data;
    if(root->data==target) return root;
    
        if(target>root->data)
        {
        return rootTOtarget(root->right,sum1,target);
        }
       else
        {
            return rootTOtarget(root->left,sum1,target);
        }
}
int fn2(Node *root)
{
    if(root->left==NULL&&root->right==NULL){
       return root->data; 
    }
    int ans=INT_MAX;
    if(root->left)
    {
        ans=min(ans,fn2(root->left));
    }
    if(root->right)
    {
        ans=min(ans,fn2(root->right));
    }
    return ans+root->data;
}

    int maxDifferenceBST(Node *root,int target){
        // Code here
        int sum1=0;
        int sum2=0;
        Node *targetnode=rootTOtarget(root,sum1,target);
        if(targetnode==NULL) return -1;
        sum2=fn2(targetnode);
        return sum1-sum2;
        
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int target;
        cin >> target;
        Solution ob;
        cout << ob.maxDifferenceBST(root, target);
        cout << endl;
    }
}
// } Driver Code Ends