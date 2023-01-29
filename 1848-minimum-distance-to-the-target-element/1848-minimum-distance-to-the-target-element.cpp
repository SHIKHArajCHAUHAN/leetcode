class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans1=-1;
        int ans2=-1;
        for(int i=start;i>=0;i--)
        {
            if(nums[i]==target){ans1=abs(i-start); 
                                break;}
        }
        for(int i=start;i<nums.size();i++)
        {
            if(nums[i]==target) {ans2=abs(start-i);break;}
        }
        if(ans1==-1) return ans2;
        else if(ans2==-1) return ans1;
        else
        return min(ans1,ans2);
    }
};