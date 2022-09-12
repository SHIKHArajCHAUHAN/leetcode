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
 ListNode* merge(ListNode* l1, ListNode* l2) {
        if (!l1)
            return l2;
        if (!l2)
            return l1;
        
        ListNode* head = NULL;
        if (l1->val <= l2->val) {
            head = l1;
            l1 = l1->next;
        }
        else {
            head = l2;
            l2 = l2->next;
        }
        
        ListNode* it = head;
        while (l1 && l2) {
            if (l1->val <= l2->val) {
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
    
    ListNode* mergeList(vector<ListNode*> &lists, int s, int e) {
        if (s > e)
            return NULL;
        if (s == e)
            return lists[s];
        
        int mid = (s + e)/2;
        ListNode* left = mergeList(lists, s, mid);
        ListNode* right = mergeList(lists, mid + 1, e);
        
        return merge(left, right);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        return mergeList(lists, 0, lists.size() - 1);
    }
};