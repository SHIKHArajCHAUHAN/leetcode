//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void append(struct Node** head_ref, struct Node **tail_ref,
            int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

/* Function to get the middle of the linked list*/
int maxPalindrome(Node *);


/* Driver program to test above function*/
int main()
{
    int T,n,l;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for (int i=1; i<=n; i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
      

       cout << maxPalindrome(head)<<endl;
    }
    return 0;
}



// } Driver Code Ends


/* The Node is defined 
  /* Link list Node
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
#include <vector>
/*The function below returns an int denoting
the length of the longest palindrome list. */
int maxp(vector<int>v)
{
   int n=v.size();
   vector<vector<int>>dp(n,vector<int>(n,0));
   int maxlen=1;
for(int diff=0;diff<n;diff++)
{
    for(int i=0,j=i+diff;j<n;i++,j++)
    {
        if(i==j)
        {
            dp[i][j]=1;
            
        }
        else if(diff==1)
        {
            if(v[i]==v[j])
            dp[i][j]=2;
            else dp[i][j]=0;
        }
        else
        {
            if(v[i]==v[j]&&dp[i+1][j-1])
            {
                dp[i][j]=dp[i+1][j-1]+2;
            }
        }
        if(dp[i][j]){
        if((j-i+1)>maxlen)
        {
            maxlen=j-i+1;
        }
        }
    }
}
    return maxlen;

}
int maxPalindrome(Node *head)
{
    //Your code here
    vector<int>v;
   while(head!=NULL)
   {
       v.push_back(head->data);
       head=head->next;
   }
   return maxp(v);
}