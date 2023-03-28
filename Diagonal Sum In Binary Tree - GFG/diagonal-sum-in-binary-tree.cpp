//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

vector<int> diagonalSum(Node*root);

int main()
{

    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
		getline(cin,s);
        Node* root = buildTree(s);
        vector <int> res = diagonalSum(root);
        for (int i : res) cout << i << " ";
        cout<<endl;
    }
    return 1;
}
// } Driver Code Ends


/*Complete the function below
Node is as follows:
struct Node{
    int data;
    Node *left,*right;
};
*/
// void fn(Node*root,vector<int>&v,int dia)
// {
//     if(root==NULL) return ;
//     if(dia<v.size())v[dia]+=root->data;
//     else v.push_back(root->data);
//       if(root->left) fn(root->left,v,dia+1);
//     if(root->right) fn(root->right,v,dia);
// }
void otherfn(Node *root,vector<int>&v)

{
    if(root==NULL) return ;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();int s=0;
        while(n)
        {
         auto now=q.front();
         q.pop();
         while(now!=NULL)
         {
           s+=now->data ;
           if(now->left)
           {
               q.push(now->left);
           }
           now=now->right;
         }
         n--;
        }
        v.push_back(s);
    }
}
vector <int> diagonalSum(Node* root) {
    // Add your code here
    vector<int>v;
    //fn(root,v,0);
    otherfn(root,v);
    return v;
}