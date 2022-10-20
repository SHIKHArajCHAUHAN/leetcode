class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
       map<string,int>mp;
    
             string str="";
        for(int i=0;i<paragraph.length();i++)
        {
            if((paragraph[i]>='a' && paragraph[i]<='z')||(paragraph[i]>='A' && paragraph[i]<='Z'))
                str+=tolower(paragraph[i]);
            else
            {
                if(str.length())
                    mp[str]++;
                str="";
            }
        }
        if(str.length())
            mp[str]++;
        for(auto i:banned)
            mp[i]=0;
        int res=0;
        str="";
        for(auto i:mp)
        {
            if(res<i.second)
            {
                res=i.second;
                str=i.first;
            }
        }return str;
            
    }
};