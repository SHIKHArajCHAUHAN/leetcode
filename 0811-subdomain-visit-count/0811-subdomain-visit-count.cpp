class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
      map<string,int>mp;
        for(auto it:cpdomains)
        {
            int indx=it.find(' ');
            int n=stoi(it.substr(0,indx+1));
            string s=it.substr(indx+1);
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='.') mp[s.substr(i+1)]+=n;
            }
            mp[s]+=n;
        }
    
    vector<string>v;
    for(auto i:mp)
    {
        string str=to_string(i.second)+" "+i.first;
        v.push_back(str);
    }
        return v;}
    
    
};