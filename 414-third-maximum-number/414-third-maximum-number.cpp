class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int a=n-1,i,count=0;
        while(a>=0){
    count++;i=a-1;
            while(i>=0&& nums[i]==nums[a]) i--;
            if(i==-1) return nums[n-1];
            a=i;
            if(count==2)
                return nums[a];
                
            }
        return -1;
        
        
    }
};