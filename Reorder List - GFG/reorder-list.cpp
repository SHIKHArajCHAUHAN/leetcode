//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Following is the Linked list node structure */

/*
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
   Node*rev(Node* head)
   {
       Node *prev=NULL;
       Node *cur=head;
       Node*nxt=NULL;
       while(cur!=NULL)
       {
           nxt=cur->next;
           cur->next=prev;
           prev=cur;
           cur=nxt;
       }
       return prev;
   }
    void reorderList(Node* head) {
        // Your code here
        Node*slow=head,*fast=head;
        Node*h1=slow;
        Node *h2=h1;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=slow;
        fast=rev(slow);
        slow=NULL;
        while(h1->next!=NULL&&fast->next!=NULL)
        {
            Node *t1=h1->next;
            Node *t2=fast->next;
            h1->next=fast;
            fast->next=t1;
            fast=t2;
            h1=t1;
        }
        while(fast->next!=NULL)
        {
            h1->next=fast->next;
            fast=fast->next;
        }
       head=h2;
    }
};

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends