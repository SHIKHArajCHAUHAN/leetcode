//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Linked List Node
struct Node
{
	Node* next;
	int data;
};

// Utility function to insert a node at the
// beginning
void push(Node** head, int data)
{
	Node* newNode = new Node;
	newNode->next = (*head);
	newNode->data = data;
	(*head) = newNode;
}

// Utility function to print a linked list
void printList(Node* head)
{
	while (head != NULL)
	{
		cout << head->data;
		if (head->next != NULL)
			cout << " ";
		head = head->next;
	}
	cout << endl;
}


// } Driver Code Ends
/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
class Solution{
    
public:
    Node* sortList(Node* head)
    {
        // Your Code Here                                   o(n) and space 0(n)
      /*  Node *temp=head;
        vector<int>v;
        while(temp)
        {
           v.push_back(temp->data);
           temp=temp->next;
        }
        Node * temp2=head;
    sort(v.begin(),v.end());
       for(int i=0;i<v.size();i++)
       {
           temp2->data=v[i];
           temp2=temp2->next;
       }
       return head;*/
       ///********************for reverse
     /*  Node *cur=head;
       Node *prev=NULL;
       Node *nxt=NULL;
       while(cur)
       {
           
          nxt= cur->next;
          cur->next=prev;
          prev=cur;
          cur=nxt;
       }
       return prev;*/////////////////////////////////////
       //sort inplace*******************************************point to remember**********o(n),o(1)
        Node *cur=head->next;
       Node *prev=head;
       Node *nxt=NULL;
       while(cur)
       {
           if(cur->data<0)//-ve k liy lekin +ve k liy sort krne ki jrurt nhi
           {
              nxt=cur->next;// y ptr bdhane k liy nxt=-2
              cur->next=head; 
              prev->next=nxt;
              head=cur;
              cur=nxt;
              
           }
           else
           {
               cur=cur->next;
               prev=prev->next;
           }
       }
       return head;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{

	int t = 0;
	int n = 0;
	cin >> t;
	while (t--)
	{
		Node* head = NULL;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			// push(&head, a);
		}
		for (int i = n - 1; i >= 0; i--)
		{
			push(&head, arr[i]);
		}
		// printList(head);
		
		Solution ob;
		head=ob.sortList(head);

		printList(head);

	}
	return 0;
}

// } Driver Code Ends