//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

Node *newNode(int data)
{
    Node *temp=new Node(data);
    
    return temp;
}




void displayList(Node *head)
{
    //Head to Tail
    while(head->next)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<head->data;
    
    
    
}


int getLength(Node * head)
{
    Node *temp=head;
    
    int count=0;
    while(temp->next!=head)
    {
        count++;
        temp=temp->next;
    }
    return count+1;
}




bool verify(Node* head)
{
    int fl=0;
    int bl=0;
    
    Node *temp=head;
    
    while(temp->next)
    {
        temp=temp->next;
        fl++;
    }
    
    while(temp->prev)
    {
        temp=temp->prev;
        bl++;
    }
    
    return fl==bl;
}


// } Driver Code Ends
/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/

class Solution
{
public:

    Node * removeDuplicates(struct Node *head)
    {
        // Your code here
        // set<int>s;
        // if(head==NULL) return NULL;
        // Node*temp=head;
        // while(temp &&temp->next!=nullptr)
        // {
        //     if(s.find(temp->data)==s.end())
        //     {
        //         s.insert(temp->data);
        //     }
        //     else
        //     {
        //         temp->prev->next=temp->next;
        //         temp->next->prev=temp->prev->next;
        //     free(temp);
                
                
        //     }
        //     temp=temp->next;
        // }
        // return head;
         Node* temp = head;
        Node* ptr =  NULL;
        while(temp && temp->next)
        {
            if(temp->next->data == temp->data)
            {
                //duplicate found
                ptr = temp->next;
                while(ptr->next && ptr->data == ptr->next->data)ptr = ptr->next;
                temp->next = ptr->next;
                if(ptr->next)
                    ptr->next->prev = temp;
            }
            temp = temp->next;
        }
        
        return head;
        
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Node *head=NULL, *tail=NULL;
        int x;
	    cin>>x;
	    head = newNode(x);
	    tail = head;
	    
	    for(int i=0;i<n - 1;i++)
	    {
	        cin>>x;
	        Node* temp=newNode(x);
	        tail->next=temp;
	        temp->prev= tail;
	        tail = temp;
	    }
	    Solution obj;
	    head=obj.removeDuplicates(head);
	    
	    
	    if(verify(head))
	    displayList(head);
	    else
	    cout<<"Your pointers are not correctly connected";
 
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends