class Solution {
public:
    int fn(string s,string &p,vector<int>&remove,int k)
    {
        for(int i=0;i<k;i++)
        {
            s[remove[i]]='?';
        }
        int n1=s.length();
        int n2=p.length();
        int i=0,j=0;
        while(i<n1&&j<n2)
        {
            if(s[i]==p[j]){
                i++;j++;
            }
            else i++;
        }
        return j==n2;
    }
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int st=0;
        int e=removable.size();
        int ans=0;
        while(st<=e)
        {
            int mid=(e+st)/2;
            if(fn(s,p,removable,mid)) 
            {ans=mid;st=mid+1;}
            else e=mid-1;
        }
        return ans;
    }
};