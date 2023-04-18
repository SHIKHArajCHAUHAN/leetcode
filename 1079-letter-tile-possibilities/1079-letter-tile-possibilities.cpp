class Solution {
public:
     map< int, int> mp;
    set< string> st;
    string s;

    void fn(string tiles){
        for(int i = 0; i<tiles.size(); i++){
            if(!mp[i]){
                s.push_back(tiles[i]);
                mp[i] = 1;
                st.insert(s);
                fn(tiles);
                mp[i] = 0;//backtrack
                s.pop_back();//backtrack/
            }
        }
    }
    int numTilePossibilities(string tiles) {
    fn(tiles);
        
//         for(auto i:st)
//         {
//           cout<<i<<endl;  
//         }
        
        return st.size();
    }
};