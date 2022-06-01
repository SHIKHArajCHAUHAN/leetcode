class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
   /* if(n1==n2){
        for(int i=0;i<n1;i++){
          if(s[i]==t[i]){
              return true;}
            else return false;}
        } return false;*/
        return(s==t);
    
    }
};