class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            while(!st.empty()&&st.top()>nums[i]&&(nums.size()-i)>(k-st.size()))
            {
                st.pop();
                
                
            }
            if(st.size()<k)
            {
                st.push(nums[i]);
            }
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};