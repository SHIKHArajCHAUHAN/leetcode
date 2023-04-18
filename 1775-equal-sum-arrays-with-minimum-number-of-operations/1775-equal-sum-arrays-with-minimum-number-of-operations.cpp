class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
    
        int n1 = nums1.size();
        int n2 = nums2.size();
        int sum1 = accumulate(nums1.begin(), nums1.end(), 0);
        int sum2 = accumulate(nums2.begin(), nums2.end(), 0);
        priority_queue<int> pq;
        if(sum1==sum2) return 0;
        if(sum1 > sum2)
        {
            for(int i = 0; i < n1; i++)
            {
                pq.push(nums1[i] - 1);
            }
            for(int i = 0; i < n2; i++)
            {
                pq.push(6 - nums2[i]);
            }
        }
        else
        {
            for(int i = 0; i < n1; i++)
            {
                pq.push(6 - nums1[i]);
            }
            for(int i = 0; i < n2; i++)
            {
                pq.push(nums2[i] - 1);
            }
        }
        int diff = abs(sum1 - sum2);
        int count = 0;
        while(diff > 0 && !pq.empty())
        {
            int top = pq.top();
            pq.pop();

            diff -= min(diff, top);

            count++;
        }

        if(diff > 0)
        {
            return -1;
        }
        else
        {
            return count; 
        }
    }
};