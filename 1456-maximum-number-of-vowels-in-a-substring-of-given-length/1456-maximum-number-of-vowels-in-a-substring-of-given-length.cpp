class Solution {
public:
    set<char> sett={'a' ,'e' ,'i','o', 'u','A','E','I','O','U'};
    int maxVowels(string s, int k) {
         int count = 0;
        int ans = 0;
        
        for(int i = 0 ; i < k; i++)
        {
            if(sett.count(s[i]))
                count++;
            ans = max(ans, count);
        }
        
        for(int i = k; i < s.size(); i++)
        {
            if(sett.count(s[i-k])) 
                count--;

            if(sett.count(s[i]))  
                count++;
            
            ans= max(ans, count);
        }
        
        return ans;  
    }
};