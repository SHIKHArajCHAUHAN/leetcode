class Solution {
public:
    bool areNumbersAscending(string s) {
     vector<int>v;
        int num=0;
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i]))
            {
                num=num*10+(s[i]-'0');
            }
else if(num>0)
{
    v.push_back(num);
    num=0;
}
            }
        if(num!=0)v.push_back(num);
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]>=v[i+1]) return false;
        }
        return true;
    }
};