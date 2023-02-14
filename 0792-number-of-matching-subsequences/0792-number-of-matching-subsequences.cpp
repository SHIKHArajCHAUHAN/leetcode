class Solution {
public:
  /*  bool fn(string s, string t) {
      int n1=s.length();
        int n2=t.length();
        if(n1>n2) return false;
        int i=0;int j=0;int count =0;
        while(i<n1&&j<n2)
        {
           if(s[i]==t[j])
           {
               i++;count++;
               j++;
           }
            else{
                j++;
            }
        }if(count==n1) return true;
        else return false;
    }*/
    int numMatchingSubseq(string s, vector<string>& words) {
       /*int cnt=0;
        for(int i=0;i<words.size();i++)
        {
            if(fn(words[i],s))cnt++;
        }
        return cnt;*/
        int cnt=0;
        map<char,vector<int>>mp;
        int i=0;
        for(auto x:s)
        {
            mp[x].push_back(i++);
        }
        for(int i=0;i<words.size();i++)
        {
            string cur=words[i];
            int latest=-1;
            for(int j=0;j<cur.size();j++)
            {
                auto it=upper_bound(mp[cur[j]].begin(),mp[cur[j]].end(),latest);
                if(it==mp[cur[j]].end()) break;
                latest=*it;
                if(j==cur.size()-1) cnt++;
            }
        }
        return cnt;
    }
};