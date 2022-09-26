class Solution {
public:
   int find(int i, vector<int> &v)
    {
        if(v[i]==i) return i;
        return v[i]=find(v[i], v);
    }
    bool equationsPossible(vector<string>& e) {
        
        vector<int> v(26);
        for(int i=0;i<26;i++) v[i]=i;
        
        for(auto i:e)
        {
            if(i[1]=='=')
            {
                v[find(i[0]-'a', v)] = find(i[3]-'a', v);
            }
        }
        
        for(auto i:e)
        {

            if(i[1] == '!' && find(i[0]-'a', v) == find(i[3]-'a', v))
                return false;
        }
        
        return true;
    }
};