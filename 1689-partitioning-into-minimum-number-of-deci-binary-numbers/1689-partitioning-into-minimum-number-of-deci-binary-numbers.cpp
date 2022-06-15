class Solution {
public:
    int minPartitions(string n) {
        int maxx=0;
        int n2=n.length();
        for(int i=0;i<n2;i++)
        {
             int c=n[i]-'0';
            if(c>maxx)
                maxx=c;
        }return maxx;
        
        
    }
};