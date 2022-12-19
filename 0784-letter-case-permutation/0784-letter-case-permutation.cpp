class Solution {
public:
    void fn(int i,string s,vector<string>&ans)
    {
        //basr case
        if(i>=s.length())
        {
            ans.push_back(s);
            return;
        }
        fn(i+1,s,ans);
        
        
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-'a'+'A';
            fn(i+1,s,ans);
        }
        else if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]-'A'+'a';
            fn(i+1,s,ans);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        fn(0,s,ans);
        
    return ans;
    }
};