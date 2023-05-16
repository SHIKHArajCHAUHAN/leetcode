class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        int n = names.size();
    unordered_map<string,int>m;
    int c;
    for(int i=0;i<n;i++){
        if(m.find(names[i])==m.end()){
            m[names[i]] = 1;
        }else{
            string t = names[i];
            c = m[names[i]]++;
            while(m.find(t)!=m.end()){
                t = (names[i]+"("+to_string(c)+")");
                c++;
            }
            names[i] = t;
            m[names[i]] = 1;
        }
    }
    return names;
    }
};