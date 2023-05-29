class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
       map<string,string>mp;
        for(int i=0;i<knowledge.size();i++)
        {
            mp[knowledge[i][0]]=knowledge[i][1];
        }
         bool flag=0;
        string ans = "", word = ""; 
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                flag = true;
                continue;
            }
            if(s[i] == ')'){
                ans += (mp[word] == "")? "?": mp[word];
                flag = false;
                word = "";
                continue;
            }
            if(!flag) ans += s[i];
            else word += s[i];
        }
        return ans;
    }
};