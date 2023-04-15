class Solution {
public:
    bool buddyStrings(string s, string goal) {
      int n=s.size();
int m=goal.size();

    if(n!=m)
        return false;
    map<char,int>m1,m2;
     for(int i=0;i<n;i++)
     {
         m1[s[i]]++;
         m2[goal[i]]++;
     }
    if(m1!=m2)
        return false;
    if(s==goal)
    {
     map<char,int>m1;
     for(int i=0;i<n;i++)
     {
         m1[s[i]]++;
         if(m1[s[i]]>1)
             return true;
        
     }
    }
    int cnt=0;
     for(int i=0;i<n;i++)
     {
         if(s[i]!=goal[i])
             cnt++;
     }
    if(cnt!=2)
        return false;
    return true;  
    }
};