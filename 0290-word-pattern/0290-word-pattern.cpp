class Solution {
public:
    bool wordPattern(string pattern, string s) {
        /*int n1=pattern.length();
        string newword="";
        newword.push_back(s[0]);
        for(int i=0;i<s.length();i++)
        {
           if(s[i]==' ')newword.push_back(s[i+1]);   
        }
        if(n1!=newword.size()) return false;
       /* map<char,char>mp1;
        map<char,char>mp2;
        for (int i = 0; i < n1; i++) {
            if ((mp1.find(pattern[i]) != mp1.end() and mp1[pattern[i]] != newword[i]) or
                (mp2.find(newword[i]) != mp2.end() and mp2[newword[i]] != pattern[i])) {
                    return false;
                }
            else{
            mp1[pattern[i]] = newword[i];
            mp2[newword[i]] = pattern[i];}
        }
        return true;*/
      /*  map<char, string>mp1;
        map<string, char>mp2;
        for(int i=0; i<n1; i++){
            if(!mp1.count(pattern[i])){
                mp1[pattern[i]] = newword[i];
                if(mp2.count(newword[i]))return false;
                mp2[st[i]] = pattern[i];
            }
            else{
                if(mp1[pattern[i]] != newword[i])return false;
            }
        }
        return true;*/
         vector<string>st;
        string cur = "";
        for(auto it : s){
            if(it == ' '){
                st.push_back(cur);
                cur = "";
                continue;
            }
            cur += it;
        }
        st.push_back(cur);
        if(st.size() != pattern.size())return false;
        map<char, string>mp;
        map<string, char>check;
        for(int i=0; i< pattern.size(); i++){
            if(!mp.count( pattern[i])){
                mp[ pattern[i]] = st[i];
                if(check.count(st[i]))return false;
                check[st[i]] =  pattern[i];
            }
            else{
                if(mp[ pattern[i]] != st[i])return false;
            }
        }
        return true;
    
    }
};