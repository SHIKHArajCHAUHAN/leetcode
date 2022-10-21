class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
     /* for(int i=0;i<nums.size();i++)
      {
          for(int j=0;j<nums.size();j++)
          {
              if(i!=j&&abs(i-j)<=indexDiff&&abs(nums[i]-nums[j])<=valueDiff) return true;
          }
      }
        return false;*/
          vector<pair<int, int>>v(nums.size());
        for(int i=0; i<nums.size(); i++){
            v[i].first=nums[i];
            v[i].second=i;
        }
        sort(v.begin(), v.end());
        for(int i=0; i<nums.size(); i++){
           for(int j=i+1; j<nums.size(); j++){
               if(abs(v[i].first+valueDiff>=v[j].first)){
                   if(abs(v[i].second-v[j].second)<=indexDiff){
                       return true;
                   }
               }
               else{
                   break;
               }
           }
        }
        return false;
    }
};