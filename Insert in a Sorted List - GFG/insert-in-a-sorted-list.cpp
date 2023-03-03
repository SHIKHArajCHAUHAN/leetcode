//{ Driver Code Starts
//

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

// } Driver Code Ends
/*
structure of the node of the list is as
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

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
       /* Node*ptr=new Node(data);
        if(head==NULL) return ptr;
        Node *temp=head;
        int index=0;
        while(temp!=NULL&& temp->data<data)    {
            index++; temp=temp->next;
           
        }
        Node *p=head;
        if(index==0)
        {
            ptr->next=head;
        }
        int i=0;
        while(i<index-1)
        {
            p=p->next;
            i++;
        }
        ptr->next=p->next;
        p->next=ptr;
        return head;*/
          Node *temp=new Node(data);
        if(head==NULL)
        {
            return temp;
        }
        if(head->data>data)

        {
            temp->next=head;
            return temp;
        }
        Node *curr=head;
        while(curr->next!=NULL && curr->next->data<data)
        {
            curr=curr->next;
        }
        temp->next=curr->next;
        curr->next=temp;

        return head;
        
    }
};


//{ Driver Code Starts.
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
        
		int data;
		cin>>data;
		
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		
		int k;
		cin>>k;
		Solution obj;
		head = obj.sortedInsert(head,k);
		printList(head); 
	}
	return 0; 
} 

// } Driver Code Ends