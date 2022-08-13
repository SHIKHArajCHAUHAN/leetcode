class Solution {
    
public: int fact(int n)
{ if(n==0)return 1;
    return fact(n-1)*n;
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back(nums);
        for(int i=0; i<fact(nums.size())-1; i++)
        {
            next_permutation(nums.begin(), nums.end());
            ans.push_back(nums);
        }
        return ans;
    }
};