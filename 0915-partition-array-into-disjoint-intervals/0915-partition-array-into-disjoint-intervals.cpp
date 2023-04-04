class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
/// done with little help 
        vector<int> l,right;
    int mn = INT_MAX, mx = INT_MIN, n = nums.size();
    right.push_back(0);
    for (int i = 0; i < nums.size(); i++){
            mx = max(mx, nums[i]);
            l.push_back(mx);
            mn = min(mn, nums[n - i - 1]);
            right.push_back(mn);
    }
    right.pop_back(); /// showing the back one
    reverse(right.begin(), right.end());
    int ind;
    for (int i = 0; i < nums.size()-1; i++){
        if( l[i]<= right[i])
        {
            ind = i;
        break;
        }
            
    }
    return ind+1;  
    }
};