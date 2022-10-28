class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        vector<string>v;
        string prev="";
        for(int i=0;i<n;i++){
            string cur=words[i];
           sort(cur.begin(),cur.end());
            if(prev!=cur)
            {
                v.push_back(words[i]);
            }prev=cur;
            
        }
        return v;
    }
};