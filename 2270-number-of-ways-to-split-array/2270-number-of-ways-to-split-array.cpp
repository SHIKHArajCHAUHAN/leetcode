class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
       long long sum1=0;
        for(auto i:nums){
            sum1+=i;
        }
        int n=nums.size();
        long long sum2=0;
        int count=0;
        for(int i=0;i<=n-2;i++){
            sum2+=nums[i];
            if(sum2>=(sum1-sum2)){
                count++;
            }
        }
        return count; 
    }
};