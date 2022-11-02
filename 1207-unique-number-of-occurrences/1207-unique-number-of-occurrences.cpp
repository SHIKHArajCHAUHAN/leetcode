class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      map<int,int>mp;
        set<int>s;
        for(int i=0;i<arr.size();i++)
        {//s.insert(arr[i]);
            mp[arr[i]]++;
        }
       /*  int ans=mp[arr[0]];
        for(auto i:mp)
        {
            if(i.first!=arr[0])
            ans=ans^i.second;
        }
       if(ans==0) return true;
        else return false;*/
         for(auto i:mp){
            if(s.find(i.second)!=s.end())
                return false;
            s.insert(i.second);
        }
        return true;
    }
};