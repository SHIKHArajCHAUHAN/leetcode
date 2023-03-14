class Solution {
public:
    bool issub(string a,string b)
    {
        int i=0,j=0;
        while(i<a.length()&&j<b.length())
        {
            if(a[i]==b[j])
            
            {  i++;j++;}
            
          else i++;
        }
       
        return (j==b.length());
    }
    int findLUSlength(vector<string>& strs) {
//         int maxx=-1;
        int n=strs.size();
//         for(int i=0;i<n;i++)
//         {
//             bool flag=false;
//             int curl=strs[i].length();
//             for(int j=0;j<n;j++)
//             {
//                 if(i!=j&&issub(strs[i],strs[j]))
//                 {
//                     flag=true;
//                     break;
//                 }
//             }
//             if(flag==false)
//             {
//                 maxx=max(maxx,curl);
//             }
                
//         }
//         return maxx;
          int ans = -1;
        for(int i = 0 ; i <n; i++){
            bool flag = true;
            for(int j = 0 ; j <n; j++){
                if(i == j) continue;
                else{
                    if((int)strs[j].size() >= (int)strs[i].size()){
                        if(issub(strs[j] , strs[i])){
                            flag = false;
                            break;
                        }
                    }
                }
            }
            if(flag) ans = max(ans , (int)(strs[i].size()));
        }
        return ans;
    }
};