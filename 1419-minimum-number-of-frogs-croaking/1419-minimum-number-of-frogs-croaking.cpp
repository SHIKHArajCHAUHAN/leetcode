class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
         int n = croakOfFrogs.size();
        if(n % 5 || croakOfFrogs[0] != 'c') return -1;
        unordered_map<char, int> m;
        int frogs = 0;
        for(char c : croakOfFrogs) {
            if(c == 'r' && m['c'] <= m[c]) return -1;
            else if(c == 'o' && m['r'] <= m[c]) return -1;
            else if(c == 'a' && m['o'] <= m[c]) return -1;
            else if(c == 'k') {
                if(m['a'] <= m[c]) return -1;
                for(auto &i : m) i.second--;
            }
            m[c]++;
            frogs = max(frogs, m['c']);
        }
        for(auto i : m) {
            if(i.second) return -1;
        }
        return frogs;  
    }
};