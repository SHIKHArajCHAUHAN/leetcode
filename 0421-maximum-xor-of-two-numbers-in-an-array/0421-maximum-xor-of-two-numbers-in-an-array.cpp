class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
      // sort(nums.begin(),nums.end());
       // return nums[0]^nums[nums.size()-1];
       /* int ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                ans=max(ans,nums[i]^nums[j]);
            }
        }
        return ans;*/
        int ans=0,mask=0;
        unordered_set<int>st;
        for(int i=31;i>=0;i--){
            mask|=(1<<i);
            int temp=ans|(1<<i);
            for (int j = 0; j < nums.size(); j++) {
                int num = nums[j] & mask;
                if (st.find(temp ^ num)!=st.end()) {
                    ans = temp;
                    break;
                }
                st.insert(num);
            }
            st.clear();
        }
        return ans;
    }
};