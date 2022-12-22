class Solution {
public:
    int numDifferentIntegers(string word) {
     set<string>s;
         string str;
        word+="a";
        for(int i=0;i<word.length();i++)
        {
           // string str="";
            if(isdigit(word[i])) str.push_back(word[i]);
        else
            {
                while (str[0] == '0' && str.size() > 1)
                    str.erase(0, 1);
                if ( str.size())
                    s.insert(str);
                 str = "";
            }
           /* if(str[0]=='0')
            {  str.erase(0, 1);}
            if(str.length()!=0) s.insert(str);*/
            
        }
            
     /*   map<int,int>mp;
        for(int i=0;i<vec.size();i++)
        {
            int x=stoi(vec[i]);
            mp[x]++;
        }*/
        return s.size();
        
    }
};