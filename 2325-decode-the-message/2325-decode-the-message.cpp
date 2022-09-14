class Solution {
public:
    string decodeMessage(string key, string message) {
        char temp = 'a';
        unordered_map<char,char>mp;
        for(auto ch:key){
            if(ch != ' ' && mp.find(ch)==mp.end()){
                mp[ch] = temp;
                temp++;
            }
        }
        string res="";
        for(auto ch:message){
            if(ch != ' '){
                res += mp[ch];
            }
            else{
                res += ' ';
            }
        }
        return res;  
    }
};