class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
       vector<string>v;
        int cnt=0;
        int n=s.length();
        int i=0;
        string str="";
        for(;i<s.length();i++)
        {
            str+=s[i];
            if(str.size()==k)
            {
            v.push_back(str); 
            str.clear();
            }
        }
   if( !str.empty() ){  
        while( str.size() != k ){
            str.push_back(fill);  
        }
        v.push_back(str); 
    }
    
        return v;
    }
};