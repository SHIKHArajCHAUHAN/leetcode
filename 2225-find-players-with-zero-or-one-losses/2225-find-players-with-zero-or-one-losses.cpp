class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>v;
        vector<int>v1,v2;
        unordered_map<int,int>mp1,mp2;
        for(int i=0;i<matches.size();i++)
        {
            
            mp1[matches[i][0]]++;
                       mp2[matches[i][1]]++;

        }
        
        for(auto it:mp1) 
        {
            
           if(mp2.find(it.first)==mp2.end())
           {
               v1.push_back(it.first);
           }
        }        sort(v1.begin(),v1.end());
                                   v.push_back(v1);      

        for(auto i:mp2)
        {
            if(i.second==1&&i.first!=0)
             v2.push_back(i.first);   
        } 
        
        sort(v2.begin(),v2.end());      
        v.push_back(v2);
        return v;
    }
};