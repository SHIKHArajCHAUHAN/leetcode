class Solution {
public:
    int fn(vector<int>&v){
     int n=v.size();
        int prev=v[0];
        int prev2=0;
        for(int i=1;i<n;i++)
        {
            int take=v[i];
            if(i>1) take +=prev2;
            int nottake=0+prev;
            int curi=max(take,nottake);
            prev2=prev;
            prev=curi;
            
        }return prev;
}
    int rob(vector<int>& nums) {
         vector<int>temp1,temp2;
        int n=nums.size();
       if(n==1) return nums[0];
        for(int i=0;i<n;i++)
        {
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        int ans1=fn(temp1);
        int ans2=fn(temp2);
        return max(ans1,ans2);
    }
};