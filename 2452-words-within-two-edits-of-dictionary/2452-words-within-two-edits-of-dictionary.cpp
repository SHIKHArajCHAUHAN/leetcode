class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
       //  int wordsize=queries[0].size();
       //  vector<string>v;
       // for(int i=0;i<queries.size();i++)
       // {
       //     string str=queries[i];int edit=0;
       //     for(int j=0;j<dictionary.size();j++)
       //     {
       //         for(int k=0;k<wordsize;k++)
       //         {
       //             if(queries[i][k]!=dictionary[j][k])edit++;
       //         }
       //         if(edit<=2) v.push_back(queries[i]);
       //     }
       // }
       //  return v;
            int n = queries[0].size() ;
        vector<string>res ;
        for(auto& s : queries){
            for(auto& t :　dictionary){
                int edit = 0 ;
                for(int i = 0; i < n; i++){
                    if(s[i] != t[i]){
                        edit++ ;
                        if(edit > 2)
                            break ;
                    }
                }
                if(edit <= 2){
                    res.push_back(s) ;
                    break ;
                }
            }
        }
        return res ;
    }
};