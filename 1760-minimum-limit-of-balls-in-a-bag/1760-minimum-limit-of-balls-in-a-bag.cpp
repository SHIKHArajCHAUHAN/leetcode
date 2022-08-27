class Solution {
    public:
    bool isPossible(vector<int>&nums,int mid,int maxOperations){
        int m=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mid){
                int temp=nums[i];
                if(temp%mid==0){
                    m+=(temp/mid)-1;
                }
                else m+=(temp/mid);
            }
        }
        return  m<=maxOperations;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPossible(nums,mid,maxOperations)){
                ans=mid;
                high=mid-1;
            }
            else  low=mid+1;
        }
        return ans;
        
    }
};