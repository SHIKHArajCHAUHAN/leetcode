class Solution {
public:
/*   int isSubstring(string s1, string s2)
{
   
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}*/
    int countCharacters(vector<string>& words, string chars) {
       /* sort(chars.begin(),chars.end());
        int ans=0;
      for(int i=0;i<words.size();i++)
      {
          string s=words[i];
          sort(s.begin(),s.end());
         // int res=isSubstring(s,chars);
           if (chars.find(s) != string::npos) ans+=s.length();
      }
        return ans;*/
         int sum=0,c=0;  // not by myself but got it , i aws doing with the same concept
        for(auto &x: words)
        {
            for(auto &ch : x)
            {
                if(count(x.begin(),x.end(),ch)<=count(chars.begin(),chars.end(),ch))
                {
                    c++;
                }
                else
                {
                    c=0;
                    break;
                }
            }
            sum=sum+c;
            c=0;
        }
        return sum;
    }
};