class Solution {
public:
    string maxValue(string s, int x) {
//         char sign=n[0];
//         string X=to_string(x);
//         if(sign=='-')
//         {
//           string str="";bool flag=0;
//             for(int i=0;i<n.length();i++)
//             {
//                 if(x>=(n[i]-'0'))
//                 {
//                   if(i!=0)
//                   {
//                       str=n.substr(0,i-1)+X+n.substr(i);
//                   }
//                     else
//                     {
//                         str=X+n;
//                     }
//                 }
//                 if(str!="") return "-"+str;;
//             }
//         }
//         else
//         {
          
//           string str="";bool flag=0;
//             for(int i=0;i<n.length();i++)
//             {
//                 if(x>=(n[i]-'0'))
//                 {
//                   if(i!=0)
//                   {
//                       str=n.substr(i-1,i-1)+X+n.substr(i,n-i);
//                   }
//                     else
//                     {
//                         str=X+n;
//                     }
//                 }
//                 if(str!="") return str;;
//             }
    
//         }
//         return "";
          int n = s.length();
        string ans="";
        if(s[0] != '-'){
            string t = "";
          
            for(int i=0; i<n; i++){
                if(s[i]- '0' < x ){
                    string s1 = s.substr(0,i);
                    string s2 = s.substr(i,n-i);
                    t +=s1;
                    t+=to_string(x);
                    t+=s2;
                    return t;
                    break;
                }
            }
            t+=s;
            t+=to_string(x);
            return t;
            
        }else{
            // string ans = "";
            //positive number.
            for(int i=1; i<n; i++){
                if(s[i]- '0' > x ){
                    string s1 = s.substr(0,i);
                    string s2 = s.substr(i,n-i);
                    ans+=s1;
                    ans+=to_string(x);
                    ans+=s2;
                    return ans;
                    break;
                }
            }
            ans+=s;
            ans+=to_string(x);
            

        }
        return ans;
        

    }
};