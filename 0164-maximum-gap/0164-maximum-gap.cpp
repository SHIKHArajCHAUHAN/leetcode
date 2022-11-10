class Solution {
public:
void radixSort(vector<int>&nums){
        int pos=1, mx=INT_MIN;
        for(auto x:nums)mx=max(mx, x);
        for(pos=1;mx/pos>0;pos*=10){
            countSort(nums, pos);
            
        }
    }
    void countSort(vector<int>&nums, int pos){
        vector<int>v(nums);
        vector<int>count(10, 0);
        for(auto x:v)count[(x/pos)%10]++;
        for(int i=1; i<10; i++)count[i]+=count[i-1];
        for(int i=v.size()-1; i>=0; i--){
            int x=(v[i]/pos)%10;
            int index=count[x]-1;
            nums[index]=v[i];
            count[x]--;
        }
    }
    int maximumGap(vector<int>& nums) {
        radixSort(nums);
        int mx=0;
        for(int i=1; i<nums.size(); i++){
            mx=max(mx,nums[i]-nums[i-1]);
        }
        return mx;
    }
};