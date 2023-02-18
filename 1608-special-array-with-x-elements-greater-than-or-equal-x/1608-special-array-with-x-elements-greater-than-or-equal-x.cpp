class Solution {
public:
    int specialArray(vector<int>& nums) {
      int a= 1;
        int cnt = 0;
        sort(nums.begin(),nums.end());
        for(int i =nums.size()-1 ;i>=0 ;i--){
           if(nums[i] >= a ){
               a++;
               cnt++;
           }
           else{
               if(nums[i] == cnt){return -1;}
               return cnt == 0 ? -1:cnt;
           }
        }
        return cnt ;
    }
};