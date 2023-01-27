class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>v;
        int cnt=0;
        if(nums.size()==0) return v;
        
        int start=nums[0]; 

       for(int i=0;i<nums.size();i++)
       {
           if(i==nums.size()-1||nums[i+1]!=nums[i]+1)
           {
                if(start!=nums[i])
                v.emplace_back((to_string(start))+"->"+to_string(nums[i]));
                else
                    v.emplace_back(to_string(start));
                if(i!=nums.size()-1)
                    start=nums[i+1];
            }
       }
       return v;
    }
};