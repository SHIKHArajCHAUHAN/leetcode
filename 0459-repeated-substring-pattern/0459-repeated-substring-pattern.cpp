class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        //if(n%2==1) return false;
       for(int i = 1; i <= n/2; i++){
            if(s.substr(0, n-i) == s.substr(i) && n%i == 0){
                return true;
            }
       }
           return false;
    }
};