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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>ans(m,vector<int>(n,-1));
        int left =0;
        int right=n-1;
        int bottom=m-1;
        int top=0;
        int dir=0;
        ListNode *head1=head;
        while(head1!=NULL)
        {
            if(dir==0)
            {
                for(int i=left;i<=right&&head1!=NULL;i++)
                {
                    ans[top][i]=head1->val;
                     head1=head1->next;
                }
                top++;
            }
            if(dir==1)
            {
                for(int i=top;i<=bottom&&head1!=NULL;i++)
                {
                    ans[i][right]=head1->val;
                     head1=head1->next;
                   
                }
                right--;
            }
            if(dir==2)
            {
                for(int i=right;i>=left&&head1!=NULL;i--)
                {
                    ans[bottom][i]=head1->val;
                     head1=head1->next;
                  
                }
                bottom--;
            }
            if(dir==3)
            {
                for(int i=bottom;i>=top&&head1!=NULL;i--)
                {
                    ans[i][left]=head1->val;
                     head1=head1->next;
                   
                }
                left++;
            }dir=(dir+1)%4;
           
        }
        return ans;
    }
};