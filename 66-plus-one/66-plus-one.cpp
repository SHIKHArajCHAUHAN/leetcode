class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int r=n-1,s;
while(r>=0){
    if(digits[r]==9)digits[r]=0;
    else{
        digits[r]+=1;
        return digits;
    }r--;
    }digits.insert(digits.begin(),1);
        return digits;}
};