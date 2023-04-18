class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        int n=pref.size();
        for(int i=0;i<words.size();i++)
        {
            // if(words[i].find(pref)!=string :: npos ) cnt++;
//             int cnt2=0;
//             for(int j=0;j<pref.size();j++)
                
//             {
//                if(words[i][j]==pref[j]) cnt2++; 
//             }
//             if(cnt2==pref.size()) cnt++;
            if(words[i].substr(0,n)==pref)cnt++;
        }
        return cnt;
    }
};