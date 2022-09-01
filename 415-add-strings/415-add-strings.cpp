class Solution {
public:
    string addStrings(string num1, string num2) {
     /* int x=stoll(num1);
        int y=stoll(num2);//// 48 ascii of 0
        return to_string(x+y);*/
          int carry = 0;
        int i = num1.length()-1;
        int j = num2.length()-1;
        string ans ="";
        while(i>=0 || j>=0 || carry){
            int sum = 0;
            if(i>=0){
                sum += (num1[i]-'0') ;
                i--;                
            }
            if(j>=0){
                sum += (num2[j]-'0');
                j--;
            }
            sum+=carry;
            carry = sum/10;
            ans += sum%10 + '0';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};