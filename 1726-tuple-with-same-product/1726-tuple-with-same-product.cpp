class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
       map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++)
            {
                mp[nums[i]*nums[j]]++;
            }
        }
        int cnt=0;
        for(auto i:mp)
            
        {
            if(i.second==1)continue;
            cnt+=((i.second-1)*(i.second)*2*2*2)/2;
        }
        return cnt;
    }
};