//{ Driver Code Starts
#include<bits/stdc++.h>
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

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* makeUnion(struct Node* head1, struct Node* head2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        printList(makeUnion(first,second));
    }
    return 0;
}

// } Driver Code Ends


/*
// structure of the node is as follows

struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/

struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
   /* if(head1==NULL&&head2==NULL) return NULL;
    if(head1==NULL&&head2!=NULL) return head2;
        if(head1!=NULL&&head2==NULL) return head1;
        struct Node*temp=new Node(0);
       struct  Node*res=temp;
        map<int,int>mp;
        while(head1)
        {
            if(mp.find(head1->data)==mp.end())
            {
                temp->next=head1;
                temp=temp->next;
                mp[head1->data]++;
                
            }
            head1=head1->next;
        }
         while(head2)
        {
            if(mp.find(head2->data)==mp.end())
            {
                temp->next=head2;
                temp=temp->next;
                mp[head2->data]++;
                
            }
            head2=head2->next;
        }temp->next=NULL;
        return res->next;*/
         set<int>s;
    Node*temp=head1;
    while(temp!=NULL)

    {
        s.insert(temp->data);
        temp=temp->next;
    }
    temp=head2;
    while(temp!=NULL)

    {
        s.insert(temp->data);

        temp=temp->next;

    }
    vector<int>v(s.begin(),s.end());
    Node* head=new Node(v[0]);

    temp=head;
    for(int i=1;i<v.size();i++)
{

        Node* n=new Node(v[i]);
        temp->next=n;
        temp=n;
    }
    return head;
}
