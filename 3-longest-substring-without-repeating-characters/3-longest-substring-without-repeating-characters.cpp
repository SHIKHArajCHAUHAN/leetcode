class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        int index=0;
        for(int i=0;i<s.length();i++)
        {

            vector<bool>ans(259);
            for( int j=i;j<s.length();j++){
            if(ans[s[j]]==true)
            break;   
        
            else{
                count=max(count,j-i+1);
                ans[s[j]]=true;
            } 
            }
            ans[s[i]]=false;
        }
        
        return count;
             
    }
};