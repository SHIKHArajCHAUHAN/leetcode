class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int count=0;
        long long int n=nums.size();
        /*for(int i=0;i<nums.size()-1;i++)
        {
            int x=nums[i]-i;
            for(int j=i+1;j<nums.size();j++)
            {
                if(x!=nums[j]-j)
                    count++;
            }
        }
        return count;*/
                    long long int y=0;

        long long int x=0;
        map<int, int>mp;
        for(auto i=0;i<nums.size();i++)
        {
            
                y+=mp[nums[i]-i];
            mp[nums[i]-i]++;
        }
    
        return (n*(n-1))/2-y;
    }
};