class Solution {
public:
    int findTheLongestSubstring(string s) {
     /*  map<char,int>mp;
        mp['a']=1;mp['e']=2;mp['i']=4;mp['o']=8;mp['u']=16;
        int seen[32]={-1};int maxx=0;
        int mask=0;
        for(int i=0;i<s.length();i++)
        {
            mask^=(mp[s[i]-'a']);
            if(mask!=0 && seen[mask]==-1)
                seen[mask]=i;
            maxx=max(maxx,i-seen[mask]);
            
        }
        return maxx;*/
       vector<int>mask(32,-1);
        int m=0;
        int maxlen=0;
      
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'){
                m=m^((s[i]-'a')+1);
            }
            else{
                m=m^0;
            }
            if(m!=0&&mask[m]==-1){
                mask[m]=i;
            }
            else{
                maxlen=max(maxlen,i-mask[m]);
            }
        }
        return maxlen;
	  
    }
};