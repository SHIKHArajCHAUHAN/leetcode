class Solution {
public:
    bool checkInclusion(string s1, string s2) {
     /* vector<int>v;
        map<char,int>mp;
        for(auto i:s1)
        {
            mp[i]++;
        }
        int k=s1.length();
        int n=mp.size();
        int i=0,j=0;
        while(j<s2.length())
        {
            if(mp.find(s2[j])!=mp.end())
            {
                mp[s2[j]]--;
                if(mp[s2[j]]==0)
                {
                    n--;
                }
            }
            if(j-i+1<k) j++;        
            else if(j-i+1==k)
            {
                if(n==0)
                {
                    v.push_back(i);
                    if(mp.find(s2[i])!=mp.end())
                    {
                        mp[s2[i]]++;
                        if(mp[s2[i]]==1){n++;}
                    }
                }
            }
            j++;i++;
        }
        if(v.size()==0) return false;
        else return true;*/
        int m = s1.size();
        int n = s2.size();
        if(m > n)
        {
            return false;
        }
        vector<int> v1(26,0);
        for(int i=0;i<m;i++)
        {
            v1[s1[i]-'a']++;
        }
        vector<int> v2(26,0);
        int i=0,j=0;
        while(j<n)
        {
            v2[s2[j]-'a']++;
            if(j-i+1 == m)
            {
                if(v1 == v2)
                {
                    return true;
                }
            }
            if(j-i+1 < s1.size())
            {
                j++;
            }
            else
            {
                v2[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        return false;
    }
};