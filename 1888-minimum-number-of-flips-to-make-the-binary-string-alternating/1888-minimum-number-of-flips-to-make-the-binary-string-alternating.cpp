class Solution {
public:
    int minFlips(string s) {
        ///s1=10101010101  s2=01010101 like this cnt the differsnce in both retuen min of both cnt
      int N = s.size(), start = 1, start1 = 1, res1 = 0, res2 = 0, res = INT_MAX;
        s = s+s;
        for(int i = 0; i < 2*N-1; i++) {
            res1 += s[i] != start + '0';
            res2 += s[i] == start + '0';
            start = 1 - start;
            if(i >= N-1) {
                res = min(res, min(res1, res2));
                res1 -= (s[i-N+1] != start1 + '0');
                res2 -= (s[i-N+1] == start1 + '0');
                start1 = 1 - start1;
            }
        }
        return res;   
    }
};