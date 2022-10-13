class Solution {
public:
    int characterReplacement(string s, int k) {
         int n = s.length(), i = 0, j = 0, res = 0, count = 0;
        vector<int> v(26, 0);
        if(n== 1) return 1;

        while(j<n){
            v[s[j] - 'A']++;
            count = max(count, v[s[j] - 'A']);

            while(j- i+ 1 - count > k){
                v[s[i] - 'A']--;
            i++;
            }

            res = max(res, j -i+ 1);
            j++;
        }

        return res; 
    }
};