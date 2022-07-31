class Solution {
public:
    vector<int> diStringMatch(string s) {
     vector<int>v;
       int n=s.length();
        int cnt_i=0; int cnt_d=n;
        
        for(int i=0;i<n+1;i++)
        {if(s[i]=='I') v.push_back(cnt_i++);
         else v.push_back(cnt_d--);
            
        }
        return v;
    }
};