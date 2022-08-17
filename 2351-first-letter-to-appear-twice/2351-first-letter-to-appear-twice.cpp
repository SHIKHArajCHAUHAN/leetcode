class Solution {
public:
    char repeatedCharacter(string s) {
      int n=s.length();
        int arr[26]={0};
        char st;
        for(int i=0;i<n;i++)
        {
            if(arr[s[i]-'a']==0) 
            {
               arr[s[i]-'a']=1;
                
            }
            else return s[i];
        } 
        return '0';
    }
};