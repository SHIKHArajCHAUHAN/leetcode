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
    ListNode* mergeNodes(ListNode* head) {
        int sum=0;
        if(head==NULL) return NULL;
        ListNode*ptr1=head->next,*ret=NULL,*itr=NULL;
        while(ptr1!=NULL)
        {
         if(ptr1->val!=0){
             sum=sum+ptr1->val;
             ptr1=ptr1->next;
         } 
            else
            {
               ListNode *ptr= new ListNode(sum);
                sum =0;
                if(ret==NULL && itr==NULL)
                {
                    ret=ptr;
                    itr=ptr;
                        
                }
                else{
                    itr->next=ptr;
                    itr=itr->next;
                }
                ptr1=ptr1->next;
            }
            
        }
        return ret;
        
    }
};