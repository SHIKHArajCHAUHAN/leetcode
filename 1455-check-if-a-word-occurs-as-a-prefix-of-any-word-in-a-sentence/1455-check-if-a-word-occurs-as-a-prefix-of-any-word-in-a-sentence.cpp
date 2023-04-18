class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
     int n=searchWord.size();
        vector<string>v;string str="";
        int cnt=0;
        for(int i=0;i<sentence.size();i++)
        {
            // if(sentence[i]==' ')gap++;
            // if(sentence.substr(i,n)==searchWord) return gap+1;
           if(sentence[i]!=' ') str.push_back(sentence[i]);
            else
            {
                v.push_back(str);
                str="";
                
            }
        }
        v.push_back(str);
        for(int i=0;i<v.size();i++ )
        
        {
            if(v[i].substr(0,n)==searchWord)return i+1 ;
        }
       
        return -1;
    }
};