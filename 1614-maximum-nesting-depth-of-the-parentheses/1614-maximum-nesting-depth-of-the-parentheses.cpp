class Solution {
public:
    int maxDepth(string s) {
        stack<char>a;
        int count=0;
        int maxx=INT_MIN;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                count++;
            else if(s[i]==')')
                count--;
                
            maxx=max(maxx,count);
            
        }return maxx;
        
    }
};