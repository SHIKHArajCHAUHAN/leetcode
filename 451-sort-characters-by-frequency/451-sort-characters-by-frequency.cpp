class Solution {
public:
    string frequencySort(string s) {
      map<char,int>mp;
          for(int i=0;i<s.length();i++)
          {
              mp[s[i]]++;
          }
        priority_queue<pair<int,char>>pq;
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
            
        }
        string str;
        while(!pq.empty())
        {
           auto x=pq.top();
            pq.pop();
            for(int i=0;i<x.first;i++)
            { str.push_back(x.second);}
        }
        
        return str;
    }
};