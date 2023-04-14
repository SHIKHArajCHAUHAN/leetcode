class Solution {
public:
    string smallestSubsequence(string s) {
      vector<int>v(26,0);// dis char k freq k liy
        stack<int>s1;// to check wehther it presentes previously
string res="";
for(int i=0;i<s.size();i++)
{
v[s[i]-'a']++;
}
unordered_set<int>present;///distinct char k liy
for(int i=0;i<s.size();i++)
{
v[s[i]-'a']--;
if(present.find(s[i])!=present.end())
{
continue;
}

        while(s1.size()>0&&s1.top()>s[i]&&v[s1.top()-'a']>0)
        {
            present.erase(s1.top());
            s1.pop();
            
        }
        s1.push(s[i]);
        present.insert(s[i]);
        
    }
    while(s1.size()>0)
    {
       res+=s1.top();
        s1.pop();
    }
    reverse(res.begin(),res.end());
    return res;
    }
};