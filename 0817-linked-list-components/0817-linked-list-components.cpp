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
    int numComponents(ListNode* head, vector<int>& nums) {
      set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int cnt=0;
        bool streak=false;
        while(head!=NULL)
        {
            int val=head->val;
            if(s.count(val)&&streak==false)
            {
                cnt++;
                streak=true;
            }
            else if(s.count(val)==0&&streak==true)
            {
                streak=false;
            }
            head=head->next;
        }
        return cnt;
    }
};