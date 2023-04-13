class Solution {
public:
    bool check(vector<int>& nums) {
        string str="";
        for(int i=0;i<nums.size();i++)
        {
            str.push_back(nums[i]-'0');
        }
        
        string s=str+str;
        sort(str.begin(),str.end());
         if (s.find(str) != string::npos)
             return true;
        else return false;
        
    }
};