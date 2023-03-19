class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
       map<int,vector<int>>mp;
        for(auto i:roads)
        {
            mp[i[0]].push_back(i[1]);   
             mp[i[1]].push_back(i[0]);
        }
        int minn=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
           for(int j=i+1;j<n;j++)
           {
               int cur=mp[i].size()+mp[j].size();
               if((find(mp[i].begin(),mp[i].end(),j)!=mp[i].end())&&         (find(mp[j].begin(),mp[j].end(),i)!=mp[j].end()))
               {
    
                  cur--;
               }
               minn=max(minn,cur);
                         }
            
          
        }
        return minn; 
    }
};
// std::find(vec.begin(), vec.end(), item) != vec.end()