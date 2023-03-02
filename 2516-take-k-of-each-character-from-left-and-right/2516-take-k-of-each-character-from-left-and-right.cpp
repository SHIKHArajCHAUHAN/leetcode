class Solution {
public:
    int takeCharacters(string s, int k) {
       int a=0,b=0,c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')a++;
            if(s[i]=='b')b++;
            if(s[i]=='c')c++;
        }
        a=a-k;
        b=b-k;
        c=c-k;
            if(a<0||b<0||c<0)return -1;
        int j=0,pa=0,pb=0,pc=0;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')pa++;
            else if(s[i]=='b')pb++;
            else pc++;
            while(pa>a)
            {
                if(s[j]!='a')
                {
                    if(s[j]=='b')
                    {
                        pb--;
                    }
                    else pc--;
                    j++;
                }
                else
                {
                    pa--;
                    j++;
                }
            }
             while(pb>b)
            {
                if(s[j]!='b')
                {
                    if(s[j]=='a')
                    {
                        pa--;
                    }
                    else pc--;
                    j++;
                }
                else
                {
                    pb--;
                    j++;
                }
            }
             while(pc>c)
            {
                if(s[j]!='c')
                {
                    if(s[j]=='b')
                    {
                        pb--;
                    }
                    else pa--;
                    j++;
                }
                else
                {
                    pc--;
                    j++;
                }
            }
            ans=max(ans,i-j+1);
            
        }
        return s.size()-ans;
    }
};