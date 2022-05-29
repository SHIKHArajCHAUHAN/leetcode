class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int n=nums.size();
        int a=INT_MIN,msum=0,s=0;
        for(int i=0;i<n;i++){
             s+=nums[i];
            a=max(a,s-msum);
            msum=min(s,msum);
        }return a;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};