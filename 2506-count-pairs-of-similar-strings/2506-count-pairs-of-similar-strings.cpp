class Solution {
public:
    int similarPairs(vector<string>& words) {
      vector<set<char>>v;
        for(int i=0;i<words.size();i++)
        {
            set<char>s;
            for(auto j:words[i])
            {
                s.insert(j);
            }
            v.push_back(s);
        }
        int cnt=0;
        for(int i=0;i<v.size()-1;i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(v[i]==v[j])cnt++;
            }
        }
        return cnt;
    }
};