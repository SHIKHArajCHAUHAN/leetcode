class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
       map<string,int>mp1,mp2;
        int j=0;
        for(int i=0;i<s1.length();i++)
        {
           if(s1[i]==' '){
            string s=s1.substr(j,i-j);
            mp1[s]++;
            j=i+1;}
        }
        mp1[s1.substr(j,s1.length()-j)]++;
        j=0;
         for(int i=0;i<s2.length();i++)
        {
           if(s2[i]==' '){
            string s=s2.substr(j,i-j);
            mp2[s]++;
             j=i+1;}
         } mp2[s2.substr(j,s2.length()-j)]++;
        vector<string>v;
        for(auto i:mp1)
        {
              if ((mp2.find(i.first)==mp2.end())&&(i.second==1))
                v.push_back(i.first);
            
        }
         for(auto i:mp2)
        {
         
            if((mp1.find(i.first)==mp1.end())&&(i.second==1))
               v.push_back(i.first);
            
        }
        return v;
    }
};