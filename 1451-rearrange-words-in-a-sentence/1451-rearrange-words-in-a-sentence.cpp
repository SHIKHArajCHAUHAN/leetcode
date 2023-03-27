class Solution {
public:
    string arrangeWords(string text) {
           map<int,string>mp;
        for(int i=0;i<text.size();i++){
            string t="";
            while(isalpha(text[i])){
                t+=tolower(text[i]);
                i++;
            }
            mp[t.size()]+=t+" ";//yha hmlog sb string word ko length k hisab se asc order m dall liya hai 
        }
        text="";
        for(auto it:mp){
            text+=it.second;
        }
         text.pop_back();// y last ka space htanek liy use kr rhe
        text[0]=toupper(text[0]);
        return text;  
    }
};