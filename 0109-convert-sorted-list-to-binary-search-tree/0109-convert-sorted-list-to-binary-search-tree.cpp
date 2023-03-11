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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode *sortarr(int arr[],int start,int end)
    {
       if(start>end) return NULL;
        int mid=start+(end-start)/2;
        TreeNode *root=new TreeNode(arr[mid]);
        root->left=sortarr(arr,start,mid-1);
        root->right=sortarr(arr,mid+1,end);
        return root;
    }  
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode*head2=head;
        int n=0;
        while(head2!=NULL)
        {
            head2=head2->next;
            n++;
        }
      int arr[n];
        int i=0;
        ListNode* head1=head;
        while(head1!=NULL)
        {
           arr[i]=head1->val;
            head1=head1->next;
        i++;
        }
        
       return sortarr(arr,0,n-1); 
    }
};