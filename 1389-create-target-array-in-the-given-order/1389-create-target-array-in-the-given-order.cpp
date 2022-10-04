class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
         for(int i=0;i<index.size();i++){
            if(i != index[i]) {
                for(int j=i;j>index[i];j--){
                    swap(nums[j],nums[j-1]); 
                }
            }
        }
        return nums;
    }
};