class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
       sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
    int n=s1.size();
        int x=0;
        int y=0;
        for(int i=0;i<n;i++)
        {
           if( s1[i]>=s2[i]) x++;
            
            
          }
                for(int i=0;i<n;i++)
                {
                    if(s1[i]<=s2[i])
                       y++;
                }
        return( x==n||y==n);
    }
};