class Solution {
public:
    int fn(int n)
    {
        if(n==0||n==1) return 1;
        return n*fn(n-1);
    }
    string getPermutation(int n, int k) {
      string s="";
        for(int i=1;i<=n;i++)
        {
            s+=to_string(i);
        }
        string str="";
        if(k==1) return s;
        k=k-1;
        while(next_permutation(s.begin(),s.end())&& k--)
        {
            str=s;
        }
        return str;
    }
};