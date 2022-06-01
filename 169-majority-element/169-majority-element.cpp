class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=1,y=0,i=0;
        sort(nums.begin(),nums.end());
        while(i<n-1&&n>1){
            if(nums[i]==nums[i+1]){
                count++;}
        else{
            count=1;
        }
        if(count>(n/2)){y=nums.at(i);
            
        }i++;}if(n==1)return 1;else return y;
    }
};