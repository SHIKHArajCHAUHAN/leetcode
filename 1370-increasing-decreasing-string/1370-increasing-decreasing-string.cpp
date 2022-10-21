class Solution {
public:
    string sortString(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }   vector<int> v(26,0);
    string str;
    int k = s.size();
    for(int i = 0; i<s.size(); i++){
        v[s[i] - 'a']++;
    }
    while(k){
        for(int i = 0; i<v.size(); i++){
            if(v[i] > 0){
                str += i +'a';
                v[i]--;
                k--;
            }
        }
        for(int i = 25; i>=0; i--){
            if(v[i] > 0){
                str += i +'a';
                v[i]--;
                k--;
            }
            
        }
    }
    return str;   
    }
};