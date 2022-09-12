class Solution {
public:
    string multiply(string num1, string num2) {
      int n1=  num1.length();
        int n2=num2.length();
        if(num1=="0"||num2=="0") return "0";
       /* int carry=0;
        int i = num1.length()-1;
        int j = num2.length()-1;
        string ans ="";
        while(i>=0 && j>=0 || carry!=0){
            int sum = 1;
            if(i>=0){
                sum *= int(num1[i]) - 48;
                i--;                
            }
            if(j>=0){
                sum *= int(num2[j]) - 48;
                j--;
            }
            sum+=carry;
            carry = sum/10;
            ans += sum%10 + 48;
        }
        reverse(ans.begin(),ans.end());
        return ans;*/
    
        vector<int>res(n1+n2,0);
        for(int i=n1-1;i>=0;i--)
        {
            for(int j=n2-1;j>=0;j--)
            {
              res[i + j + 1] += (num1[i]-'0') * (num2[j]-'0');
                res[i + j] += res[i + j + 1] / 10;
                res[i + j + 1] %= 10;
            }
        }
        int i=0;
        string ans="";
        while(i<res.size()&&res[i]==0)i++;
        while(i<res.size())
        {
            ans+=(res[i++]+'0');
        }
        return ans;

    }
};