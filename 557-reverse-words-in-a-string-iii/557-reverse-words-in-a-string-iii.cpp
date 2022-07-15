class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int l=0;
        int r=0;
        while(l<n)
            {
                while(r<n&&s[r]!=' '){
                    r++;}
            
                    reverse(s.begin()+l,s.begin()+r);
            l=r+1;
                r=l;
            } 
            return s;
    }
};