class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
      /*int res=0;
        int n= num.size();
        for(int i=0;i<num.size();i++)
        {
            res+=num[i]*pow(10,n-1);
            n--;
        }
        res=res+k;
        vector<int>v;
        while(res)
        {
            int rem=res%10+rem*10;
            res/=10;
            v.push_back(rem);
        }
        reverse(v.begin(),v.end());
        return v;*/
        for(int i=num.size()-1;i>=0&&k>0;i--)
        {
            num[i]+=k;
            k=num[i]/10;
            num[i]%=10;
            
        }
while(k)
{
    num.insert(num.begin(),k%10);
    k/=10;
}
return num;
    }
};