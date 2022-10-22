//{ Driver Code Starts
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked li
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
   /* vector<int>v;
    Node *temp1=head1;
    Node *temp2=head2;
    while(temp1!=NULL)
    {
        v.push_back(temp1->data);
        temp1=temp1->next;
    }
     while(temp2!=NULL)
    {
        v.push_back(temp2->data);
        temp2=temp2->next;
    }
    sort(v.begin(),v.end());
    Node *ans=new Node(-1);
    for(int i=0;i<v.size();i++)
    {
        ans->next=new Node(v[i]);
        ans=ans->next;
    }
    return ans;*/
      Node *res;
    if(head1 == NULL)
        return head2;
        
    if(head2 == NULL)
        return head1;
    if(head1->data < head2->data) {
        res = head1;
        res->next = sortedMerge(head1->next, head2);
    }
    
    else {
        res = head2;
        res->next = sortedMerge(head1, head2->next);
    }
    return res;
  
}  