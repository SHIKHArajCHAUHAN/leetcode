class Solution {
public:
    bool detectCapitalUse(string word) {
      //A=65 Z=91  a=97 z=122
     /*   int n=word.length();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(word[i]>='a'&&word[i]<='z')
            {
                cnt++;
            }
             if(word[i]>='A'&&word[i]<='Z')
            {
                cnt++;
            }
            
        }
        if(word[0]>='A'&&word[0]<='Z')
        {
            if(cnt==n-1) return true;
        }
        else if(cnt==n) return true;
        return false;*/
         for(int i = 1; i < word.size(); i++){
            if((isupper(word[1]) != isupper(word[i])) || (islower(word[0])&& isupper(word[i])))   
            return false;
        }
        return true;
    }
};