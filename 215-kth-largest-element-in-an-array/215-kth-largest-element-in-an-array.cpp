class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      priority_queue<int>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        while(k!=1)
        {
          int x=pq.top();
            pq.pop();
            k--;
        }
        return pq.top();
    }
};