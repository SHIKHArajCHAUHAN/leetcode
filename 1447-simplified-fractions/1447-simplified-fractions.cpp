class Solution {
public:
    vector<string> simplifiedFractions(int n) {
     /* vector<string >ans;
        int x=n;
        set<string>s;
        string str;
        for(int i=1;i<n;i++)
        {
            str=to_string(i);
            str+="/";
           for(int j=i+1;j<=n;j++)
           {
               string str2=str;
               str2+=to_string(j);
               if(j%i==0&&i!=1) continue;
               else
               s.insert(str2);str2="";
           }str="";
        }
        for(auto i:s)
        {
            ans.push_back(i);
        }
        return ans;*/
         vector<string>ans;
        set<float>st;
        int d=2;
        while(d<=n){
            int num=1;
            while(num<d){
                if(st.find(float(num)/float(d))==st.end())
                ans.push_back(to_string(num)+'/'+to_string(d));
                st.insert(float(num)/float(d));
                num++;
            }
            d++;
        }
        return ans;
    }
};