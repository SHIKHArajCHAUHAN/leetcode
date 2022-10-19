class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
      map<string,int>mp;
          priority_queue<pair<int,string>>pq;
          
          for(int i=0;i<words.size();i++)
          {
              mp[words[i]]++;
          }
        for(auto i:mp)
        {
            pq.push({-i.second,i.first});
            if(pq.size()>k)
                pq.pop();
        }
        vector<string>s;
        while(k--)
        {
          s.push_back(pq.top().second); 
            pq.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};