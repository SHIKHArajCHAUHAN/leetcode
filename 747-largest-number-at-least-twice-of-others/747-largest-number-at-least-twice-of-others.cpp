class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int n=nums.size();
        int max=INT_MIN;
        int ans;
        for(int i=0;i<n;i++){
            if(max<nums[i])
            {  max=nums[i];
            ans=i;}
        }
        for(int i=0;i<n;i++)
        {
            if(max<2*nums[i]&&i!=ans)return -1;
        }
                
        return ans;
        
    }
};