class Solution {
public:
    int minSwaps(string s) {
       int extra=0;
        int maxx=0;
//         stack<char>st;
//         for(int i=0;i<s.length();i++)
//         {
//             if(s[i]=='[') st.push(s[i]);
//             else 
//             {
//                 if(st.empty()==false&&s[i]==']')
//                 {
//                     st.pop();
                    
//                 }
//                 else extra++;
//             }
        
//         }
//         return (extra+1)/2;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='[') extra-=1;
            else extra+=1;
            maxx=max(maxx,extra);
        }
        return (maxx+1)/2;
    }
};