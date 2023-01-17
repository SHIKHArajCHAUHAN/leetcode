class NumArray {
public:
    vector<int>v;
    NumArray(vector<int>& nums) {
       v=nums;
     v.push_back(0);
        for(int i=0;i<nums.size();i++)
        {
            v[i+1]=v[i]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return v[right+1]-v[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */