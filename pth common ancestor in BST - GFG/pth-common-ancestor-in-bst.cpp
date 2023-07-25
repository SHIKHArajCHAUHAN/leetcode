//{ Driver Code Starts
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

struct NODE
{
	int data;
	struct NODE *left;
	struct NODE *right;
	
	NODE(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

NODE *root=NULL;

NODE* insert(int num,NODE *root);
int pthCommonAncestor(int x,int y,NODE *root,int p,vector<int> &vec);

int main()
{
    int t,n,num,x,y,temp,p;
    scanf("%d",&t);
	while(t--){
		vector<int> vec;
	    NODE *root = NULL;
		vec.clear();
		scanf("%d %d",&n,&p);
		while(n--){
			scanf("%d",&num);
			root=insert(num,root);
		}
		scanf("%d%d",&x,&y);
		if(x>y){
			temp=x;
			x=y;
			y=temp;
		}
		printf("%d\n",pthCommonAncestor(x,y,root,p,vec));
	}
    return 0;
}

NODE *insert(int num,NODE *root){
	if(root==NULL){
		NODE *temp=new NODE(num);
		return temp;
	}else if(root->data>=num)root->left=insert(num,root->left);
	else root->right=insert(num,root->right);
	return root;
}

// } Driver Code Ends


/* The structure of Node
struct Node{
    int data;
    Node *left,*right;
}; */
void fn(int x,int y,NODE* root,int &ans,int &p){
    if(root == NULL){
        return;
    }
   
    if(root->data > x &&  root->data > y){
         fn(x,y,root->left,ans,p);
    }
    
    if(root->data < x &&  root->data < y){
         fn(x,y,root->right,ans,p);
    }
    
    p--;
    if(p == 0){
        ans = root->data; 
    }

}
int pthCommonAncestor(int x,int y,NODE *root,int p,vector<int> &vec){
     /*Your code here */
     if(root == NULL){
         return -1;
     }
     int ans = -1;
     fn(x,y,root,ans,p);
     return ans;
}