class Solution {
public:
    int countPoints(string rings) {
      int count=0;
        int n=rings.size();
        map<int,set<char>>mp;
            for(int i=1;i<n;i+=2)
            {
            mp[rings[i]].insert(rings[i-1]);
            }
        for(auto i:mp)
        {
           if(i.second.size()==3) count++; 
        }
        return count;
    }
};