class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        int n=num;
       for(int i=n/2;i<=n;i++ )
       {
        string s=to_string(i);
           reverse(s.begin(),s.end());
           if(i+stoi(s)==num) return true;
       }
        return false;
    }
};