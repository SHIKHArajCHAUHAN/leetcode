class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
      vector<int>v;
        for(int i=0;i<messages.size();i++)
        {
            int cnt=1;
            for(int j=0;j<messages[i].length();j++)
            {
               if(messages[i][j]==' ') cnt++; 
            }v.push_back(cnt);
        }
        map<string,int>mp;
        for(int i=0;i<senders.size();i++)
        {
            mp[senders[i]]+=v[i];
        }
        string s="";
        int maxx=0;
        for(auto i:mp)
        {
            if(i.second>=maxx) 
            {
                maxx=max(maxx,i.second);
                s=i.first;
            }
        }
        return s;
    }
};