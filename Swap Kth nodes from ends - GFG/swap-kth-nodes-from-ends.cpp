//{ Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
        
    bool f=true;
    
    for(int i=0; i<num; i++){
        if((i==K-1) || (i==num - K)){
            if(!((before[K-1] == after[num - K]) && (before[num-K] == after[K-1]))) f=0;
        }
        else{
            if(before[i] != after[i]) f=0;
        }
    }
    
    return f;
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}

// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int num, int K)
{
    // Your Code here
      if(K>num||head==NULL||head->next==NULL)

        return head;

        int point=num-K+1;

        Node *curr=head;

        Node *prev=NULL;

        int i=1;

        while(curr!=NULL&&i<point)

        {
            prev=curr;
            curr=curr->next;

            i++;

        }

        Node *curr1=head;

        Node *prev1=NULL;

        int j=1;

        while(curr1!=NULL&&j<K)

        {

            prev1=curr1;

            curr1=curr1->next;

            j++;

        }

        if(K==1)

        {

          curr->next=curr1->next;

          curr1->next=NULL;

          prev->next=curr1;

          head=curr;

          

        }

        else if(K==num)

        {

            curr1->next=curr->next;

            prev1->next=curr;

            curr->next=NULL;

            head=curr1;

        }

        else if(K*2==num)

        {

            curr1->next=curr->next;

            curr->next=curr1;

            prev1->next=curr;

        }

        else{

            Node *temp=curr1->next;

            prev->next=curr1;

            prev1->next=curr;

            curr1->next=curr->next;

            curr->next=temp;

        }

        return head;
}
