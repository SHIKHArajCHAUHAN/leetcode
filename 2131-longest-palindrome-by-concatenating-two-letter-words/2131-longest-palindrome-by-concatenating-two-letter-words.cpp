class Solution {
public:
    int longestPalindrome(vector<string>& words) {
      map<string,int>mp;
        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
        }
        int cnt=0;
        for(int i=0;i<words.size();i++)
        {
            if(mp.find(words[i])!=mp.end()){
            if(words[i][0]==words[i][1]&&mp[words[i]]>=2)
            {cnt+=4;
             mp[words[i]]-=2;
             if(mp[words[i]]==0)
             mp.erase(words[i]);
            }
               
            else if(words[i][0]!=words[i][1])
            {
            string s=words[i];
                swap(words[i][0],words[i][1]);
                if(mp.find(words[i])!=mp.end()&&mp.find(s)!=mp.end())
                {
                    cnt+=4;
                    mp[words[i]]--;
                    mp[s]--;
                    
                    if(mp[words[i]]==0)mp.erase(words[i]);
                 if(mp[s]==0)mp.erase(s);
                }
            }
            }
        }
        for(auto i:mp)
        {
            if(i.first[0]==i.first[1])
            {
                cnt+=2;
                
            break;}
        }
        return cnt;
    }
};