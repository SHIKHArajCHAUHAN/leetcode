class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
      vector<vector<int>>v;
        map<int,int> mp;
        for(int i=0;i<items1.size();i++){
            mp[items1[i][0]]+=items1[i][1];
        }
        for(int i=0;i<items2.size();i++){
            mp[items2[i][0]]+=items2[i][1];
        }

        for (auto i : mp){
            vector<int>v1;
            v1.push_back(i.first);
            v1.push_back(i.second);
            v.push_back(v1);
        }   
        return v;
    }
};