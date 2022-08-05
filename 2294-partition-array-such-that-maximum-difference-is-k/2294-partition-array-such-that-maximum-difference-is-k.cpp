class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        if(nums.size()==0) return 0;
       sort(nums.begin(),nums.end());
        int maxx=0;
        int minn=0;
        int count =1;
    while(maxx<nums.size())
        {
            if((nums[maxx]-nums[minn])<=k)
                maxx++;
        else{ minn=maxx; count++;
        }
    }
        return count;
    }
};