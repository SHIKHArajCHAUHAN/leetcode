class Solution {
public:
    int removePalindromeSub(string s) {
              int j=s.size()-1;
        int i=0;
        while(i<j){
             if(s[i]!=s[j])return 2;
             j--;
             i++;
        }
        return 1;
  
    }
};