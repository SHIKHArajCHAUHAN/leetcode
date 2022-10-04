class Solution {
public:
     static bool comp(string a, string b)
    {
        return a + b > b + a;
    }
    
    string largestNumber(vector<int>& nums) 
    {
        int n=nums.size();
        vector<string> s(n, " ");
        for(int i = 0; i < n; i++)
        {
            s[i] = to_string(nums[i]);
        }
        
        sort(s.begin(), s.end(), comp);
        string str = "";
        for(auto i: s){
            str = str + i;
        }
        if(str.size() > 1 && str[0] == '0')
            return "0";
        
        return str;
    }
};