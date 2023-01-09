class Solution {
public:
    string removeDuplicateLetters(string s) {
       /* vector<int>mp(27,0);
        int n=s.length();
        string str="";
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]-'a']=i;
        }
        stack<char>st;
        vector<int>v(27,0);
        for(int i=0;i<s.length();i++)
        {
            if(v[s[i]-'a']==1) continue;
            while(!st.empty()&&st.top()>s[i]&&mp[st.top()-'a']>i)
            {
                v[st.top()-'a']==0;
                st.pop();
            }
            v[s[i]-'a']==1;
                st.push(s[i]);
        }
        while(!st.empty())
        {
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
            
        return str;*/
        vector<int> map(27,0);
        vector<bool> set(27,0);
        for(int i=0;i<s.length();i++){
            map[s[i]-'a']=i;
        }
        
        stack<char> st;
        
        for(int i=0;i<s.length();i++){
            if(set[s[i]-'a']==1) continue;

            while(!st.empty() and st.top()>s[i] and map[st.top()-'a']>i){
                set[st.top()-'a']=0;
                st.pop();
            }
            st.push(s[i]);
            set[s[i]-'a']=1;          
        }
        
        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        
        return ans;
    }
};