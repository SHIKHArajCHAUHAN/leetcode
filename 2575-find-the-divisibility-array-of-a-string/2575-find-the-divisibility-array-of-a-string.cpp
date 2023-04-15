class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
    //     vector<int>v;
    //     string sum;
    //     string s=to_string(m);
    //     for(int i=0;i<word.length();i++)
    //     {
    //        sum.push_back(word[i]);
    //         if(sum==s)
    //             v.push_back(1);
    //         else v.push_back(0);
    //        s+=s; 
    //     }
    //     return v;
    //
        long long sum=0;
      vector<int>ans;
        for(int i=0;i<word.size();i++)
        {
            sum=(sum*10+(long long)(word[i]-'0'))%m;
            if(sum==0)ans.push_back(1);
            else ans.push_back(0);
        }
        return ans;
    }
};