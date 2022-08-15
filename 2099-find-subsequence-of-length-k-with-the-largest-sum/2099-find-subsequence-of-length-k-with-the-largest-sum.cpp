class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int>v(k,0);
        for(int i=0;i<nums.size();i++)
        {
        pq.push(make_pair(nums[i],i));
            
        }
        for(int i=0;i<k;i++){
            v[i]=pq.top().second;pq.pop();
        }        sort(v.begin(),v.end());

                for(int i=0;i<k;i++)
                {
                    v[i]=nums[v[i]];
                }
       // sort(v.begin(),v.end());
        return v;
    }
};