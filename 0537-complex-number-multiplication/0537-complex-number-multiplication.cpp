class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
       int a,b,c,d;
        string A="",B="",C="",D="";
        int i=0,j=0;
        while(i<num1.length())
        {
            A.push_back(num1[i]);
            i++;
            if(num1[i]=='+')break;
        }
        i++;
        while(i<num1.length())
        {
            B.push_back(num1[i]);
            i++;
        }
        while(j<num2.length())
        {
            C.push_back(num2[j]);
            j++;
            if(num2[j]=='+')break;
        }
        j++;
         while(j<num2.length())
        {
            D.push_back(num2[j]);
            j++;
        }
        a=stoi(A);
        b=stoi(B);
        c=stoi(C);
        d=stoi(D);
        string ans=to_string(a*c-b*d)+"+"+to_string(a*d+c*b)+"i";
        return ans;
    }
};