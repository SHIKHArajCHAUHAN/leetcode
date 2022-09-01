/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
   /* ListNode* reverse(ListNode* head)
    {
       ListNode* next=NULL;
           ListNode*cur=head;
        
           ListNode* prev=NULL;
        while(cur!=NULL)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    void tail(ListNode* &head,ListNode*&tail, int vall)
    {
        ListNode* temp=new ListNode(vall);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
            return;
        }
        else {tail->next=temp;
              tail=temp;}
        
    }
     
public:*/
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* t = new ListNode();
        ListNode* temp = t ;
        int c=0;
        while(l1 != NULL || l2 != NULL || c != 0)
        {
             int s=0;
            if(l1 != NULL)
            {
                s = s + l1->val ;
                l1 = l1->next ;
            }
            if(l2 != NULL)
            {
                s = s + l2->val ;
                l2 = l2->next ;
            }
            s = s + c ;
            c = s / 10 ;
            ListNode* node = new ListNode(s%10);
            temp->next = node ;
            temp = temp->next ;
            
        }
        return t->next ;
      /* reverse(l1);
        reverse(l2);
         int carry=0;
           ListNode * anshead= NULL;
           ListNode * anstail=NULL;
           while(l1!=NULL|| l2!=NULL|| carry!=0)
           {
               int val1=0;
               if(l1!=NULL)
               {
                   val1=l1->val;
               }
               int val2=0;
               if(l2!=NULL) val2=l2->val;
               int sum= val1+val2+carry;
               int digit=sum%10;
               tail(anshead,anstail,digit);
               carry=sum/10;
               if(l1!=NULL) l1=l1->next;
               if(l2!=NULL) l2=l2->next;}
         ListNode *ans=addTwoNumbers(l1,l2);
        ans=reverse(ans);
        return ans;*/
    
    }
};