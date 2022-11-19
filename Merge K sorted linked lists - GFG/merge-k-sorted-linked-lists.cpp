//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

// } Driver Code Ends
/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
  public:
   Node* merge(Node* l1, Node* l2) {
        if (!l1)
            return l2;
        if (!l2)
            return l1;
        
     Node* head = NULL;
        if (l1->data <= l2->data) {
            head = l1;
            l1 = l1->next;
        }
        else {
            head = l2;
            l2 = l2->next;
        }
        
        Node* it = head;
        while (l1 && l2) {
            if (l1->data <= l2->data) {
                it->next = l1;
                it = it->next;
                l1 = l1->next;
            }
            else {
                it->next = l2;
                it = it->next;
                l2 = l2->next;
            }
        }
        
        if(l1)
            it->next = l1;
        if(l2)
            it->next = l2;
        
        return head;
    }
    
    Node* mergeList(Node *arr[], int s, int e) {
        if (s > e)
            return NULL;
        if (s == e)
            return arr[s];
        
        int mid = (s + e)/2;
         Node* left = mergeList(arr, s, mid);
        Node* right = mergeList(arr, mid + 1, e);
        
        return merge(left, right);
    }
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
           return mergeList(arr, 0, K - 1);
    }
};



//{ Driver Code Starts.
// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}

// } Driver Code Ends