class Solution {
public:
    string truncateSentence(string s, int k) {
       vector<string>v;
        string str="";
      for(int i=0;i<s.length();i++)
      {
        if(s[i]!=' ') str.push_back(s[i]);
          else
          {
              v.push_back(str);
              str="";
          }
      }
        v.push_back(str);
        str="";
        for(int i=0;i<k;i++)
        {
            str+=v[i];
            str+=" ";
        }
        str.pop_back();
        return str;
    }
};