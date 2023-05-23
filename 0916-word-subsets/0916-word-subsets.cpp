class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
      int n = words2.size();
        map<char,int>mp;
        for(int i = 0 ; i < n ; i++)
        {
           string temp = words2[i];
            map<char,int>mp1;
            for(int j = 0 ; j < temp.size() ; j++)
            {
                mp1[temp[j]]++;
                if(mp1[temp[j]] > mp[temp[j]])
                mp[temp[j]]++;
            }
        }
        vector<string>ans;
        for(int i = 0 ; i < words1.size() ; i++)
        {
            map<char,int>mp1 = mp;
            string temp = words1[i];
            for(int j = 0 ; j < temp.size() ; j++)
            {
                if(mp.find(temp[j])!=mp.end())
                {
                    mp[temp[j]]--;
                    if(mp[temp[j]]==0)
                    {
                        mp.erase(temp[j]);
                    }
                }
            }
            if(mp.size()==0)
            {
                ans.push_back(temp);
            }
            mp = mp1;
        }
        return ans;  
    }
};