class Solution {
public:
    int countDist(vector<int>nums,int x){
int st=0;
int end=0;
for(int i=0;i<nums.size();i++){
if(nums[i]==x){
st=i;
break;
}
}

    for(int i=0;i<nums.size();i++){
        if(nums[i]==x){
            end=max(end,i);
        }
    }
    return end-st+1;
}
    int findShortestSubArray(vector<int>& nums) {
         map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    
    int maxi=INT_MIN;
    for(auto &i: mp){
        maxi=max(maxi,i.second);
    }
    
    vector<int>v;
    for(auto &i:mp){
        if(i.second==maxi){
            v.push_back(i.first);
        }
    }
    
    int minlen=INT_MAX;
    for(int i=0;i<v.size();i++){
        int ans=countDist(nums,v[i]);
        minlen=min(minlen,ans);
    }
    return minlen; 
    }
};