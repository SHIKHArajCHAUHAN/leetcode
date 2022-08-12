class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
            if(num>=1000)
            {
               int n = num/1000;
                for(int i=0; i<n; i++)
                {
                    num-=1000;
                    ans += "M";
                }
            }
            if(num>=900){ans += "CM";num-=900;}
            if(num>=500){ans += "D";num -= 500;}
            if(num >= 400){ans += "CD";num-=400;}
            if(num>=100)
            {
               int n = num/100;
                for(int i=0; i<n; i++)
                {
                    num-=100;
                    ans += "C";
                }
            }
            if(num>=90){ans += "XC";num-=90;}
            if(num>=50){ans += "L";num -= 50;}
            if(num >= 40){ans += "XL";num-=40;}
            if(num>=10)
            {
               int n = num/10;
                for(int i=0; i<n; i++)
                {
                    num-=10;
                    ans += "X";
                }
            }
            if(num>=9){ans += "IX";num-=9;}
            if(num>=5){ans += "V";num -= 5;}
            if(num>=4){ans += "IV";num-=4;}
            while(num--) ans += "I";
        return ans;
    }
};