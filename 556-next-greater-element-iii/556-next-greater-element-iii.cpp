class Solution {
public:
    int nextGreaterElement(int n) {
       string s=to_string(n);
        string s3=s;
        sort(s.begin(),s.end());
       reverse(s.begin(),s.end());
        if(s3==s) return -1;
        next_permutation(s3.begin(),s3.end());
        if(stoll(s3)>INT_MAX) return -1;
        
        else return stoll(s3);
    }
};