class Solution {
public:
    string toHex(int num) {
       string s = "0123456789abcdef";
        unsigned int n = num; //negative ko handle krega
        string ans = "";
        if (n == 0)
            return "0";
        while (n > 0)// y loop hex conversion k liy hai
        {
            int k = n % 16;
            ans += s[k];
            n /= 16;
        }
        reverse(ans.begin(), ans.end()); //hmne ese opp m push kiya hai then rev krna prega
        return ans;  
    }
};