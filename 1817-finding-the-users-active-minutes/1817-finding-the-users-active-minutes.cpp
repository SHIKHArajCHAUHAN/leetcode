class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
       map<int,set<int>>mp;
        for(auto i:logs)
        {
            mp[i[0]].insert(i[1]);
        }
        vector<int>temp;
        for(auto i:mp)
        {
            
          temp.push_back(i.second.size()); 
            
        }
        map<int,int>mapp;
        for(auto i:temp)
        {
            mapp[i]++;
        }
    vector<int>vec(k,0);
        for(auto i:mapp)
        {
            vec[i.first-1]=i.second;
                
        }
        return vec;
        
    }
};


/*0 - 2 2 5 = 2
1 - 2 3   = 2


1 - 1    = 1
2 - 2 3  = 2


*/