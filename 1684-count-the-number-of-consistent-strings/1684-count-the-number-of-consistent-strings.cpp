class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
      // set bit ...clr bit
           
           int n1=allowed.length();
        int n2=words.size();
        int cnt=n2;
        int x=0;
        for(int i=0;i<n1;i++)
        {
            x=x|(1<<(allowed[i]-'a'));
        }
        for(int i=0;i<n2;i++){
        
            for(int j=0;j<words[i].size();j++)
        {
           int y=1<<(words[i][j]-'a');
        
        
        if((x&y)==0) {cnt--;break;}}}
            return cnt;
        
    }
};