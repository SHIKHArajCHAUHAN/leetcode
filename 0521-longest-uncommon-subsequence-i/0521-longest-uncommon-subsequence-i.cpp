class Solution {
public:
//      bool issub(string a,string b)
//     {
        
//     if(a==b) return true;
//         int i=0,j=0;
//         while(i<a.length()&&j<b.length())
//         {
//             if(a[i]==b[j])
            
//             {  i++;j++;}
            
//           else i++;
//         }
       
//         return (j==b.length());
//     }
    int findLUSlength(string a, string b) {
// bool flag=true;
//         int ans=-1;
//                         if(issub(a , b)){
//                             flag = false;}
//             if(flag) ans = max(ans , (int)(a.size()));
//         return ans;
        if (a == b) return -1;
        return max(a.length(), b.length());
    }
};