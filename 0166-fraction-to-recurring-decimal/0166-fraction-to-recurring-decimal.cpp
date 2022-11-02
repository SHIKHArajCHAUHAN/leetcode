class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
    /*  string str="";
       str=(numerator > 0)^(denominator > 0) ? "-":""; 
        int n=abs(numerator);
        int d=abs(denominator);
            int q=n/d;
                int rem=n%d;
        str+=to_string(q);     
        if(rem==0) return str;
        else
        {
            str+=".";
            map<int,int>mp;
            while(rem!=0)
            {
                if(mp.find(rem)!=mp.end())
                {
                    str.insert(mp[rem], "(");  
                str += ")";                
                }
                else
                {
                 mp[rem] = str.size();    
                rem*=10;
                q=rem/d;
                rem=rem%d;
                str+=to_string(q);
                }
            }
        }
        return str;*/
         if(numerator == 0) return "0";
        
        string ans;
        ans = (numerator > 0)^(denominator > 0) ? "-":""; 
        long n = abs(numerator);       
        long d = abs(denominator);
        ans += to_string(n/d);          
        
        n = n%d;
        if(!n) return ans;      
        
        ans += ".";
    
        map<long, int> mp;
        
        while(n)        
        {   
            if(mp[n])    
            {
                ans.insert(mp[n], "(");    
                ans += ")";               
                break;          
            }
            else{
                mp[n] = ans.size();     
                n *= 10;
                ans += to_string(n/d);  
                n = n%d;               
            }
        }
        
        return ans;
       
    }
};