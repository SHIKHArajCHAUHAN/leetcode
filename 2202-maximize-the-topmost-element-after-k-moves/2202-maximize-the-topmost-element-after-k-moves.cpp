class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
      priority_queue<int>pq;
       /* if(nums.size()<k)
        {
            for(int i=nums.size()+1;i<k;i++)
                nums.push_back(0);
        }*/
       /* for(int i=0;i<k-1;i++)
        {
           pq.push(nums[i]); 
        }
        int n=nums.size();
        if(n<=k||k>n) return -1;
        int x= pq.top();pq.pop();
        return x;*/
        int n=nums.size();
        if(k==0)
            return nums[0];
        if(n==1) 
        {
            if(k%2)
                return -1;
            else
                return nums[0];
        }
        if(k>n)
        {
            int maxele=0;
            for(auto num:nums)
                maxele=max(maxele,num);
            return maxele;
        }
        int ans=0;
        for(int i=0;i<k-1;i++)
            ans=max(ans,nums[i]);
        return max(ans,nums[k]);
    }
};