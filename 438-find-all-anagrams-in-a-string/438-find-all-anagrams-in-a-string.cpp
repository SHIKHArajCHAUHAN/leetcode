class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
      vector <int>res;
map<char,int> mp;
for(int i=0;i<p.length();i++){
mp[p[i]]++;
}
int k=p.length();
int n=mp.size();

    int i=0,j=0;
    while( j<s.length()){
        if(mp.find(s[j])!=mp.end()){
            mp[s[j]]--;
            if(mp[s[j]]==0){
               n--;
            }
        }
        
        if(j-i+1 < k){
            j++;
        }else if(j-i+1 ==k){
            if(n==0){
                res.push_back(i);
            }
            if(mp.find(s[i])!=mp.end()){
	            mp[s[i]]++;
	            if(mp[s[i]]==1){
	               n++;
	            }
            }
            i++;
            j++;
        }
    }
    return res;  
    }
};