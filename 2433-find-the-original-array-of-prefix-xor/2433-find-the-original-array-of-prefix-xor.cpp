class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
      vector<int>v(pref.size(),0);
        v[0]=pref[0];
        for(int i=1;i<pref.size();i++)
        {
            v[i]=pref[i]^pref[i-1];
        }
        return v;
    }
};