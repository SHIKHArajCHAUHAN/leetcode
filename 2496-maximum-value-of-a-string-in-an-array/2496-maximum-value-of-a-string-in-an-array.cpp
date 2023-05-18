class Solution {
public:
        bool isNumber(string& s)
{
    for (char  &ch : s) {
        if (isdigit(ch) == 0) 
            return false;
    }
    return true;
 }

    int maximumValue(vector<string>& strs) {
     // int maxx=0;
     //    for(int i=0;i<strs.size();i++)
     //    {
     //        for(int j=0;j<strs[i].length();j++)
     //        {
     //          if(!isdigit(strs[i][j]))
     //          {
     //              if(maxx<strs[i].length())
     //              {
     //                 maxx=strs[i].length(); 
     //              break;
     //              }
     //          }
     //            else
     //            {
     //                maxx=max(maxx,stoi(strs[i]));
     //            }
     //        }
     //    }
     //   return maxx; 
         unordered_map<string, int>mp;
        int n=strs.size();
        for(int i=0;i<n;i++){
            if(isNumber(strs[i])){
                mp.insert({strs[i],stoi(strs[i])});
            }
            else{
                int len=strs[i].length();
                mp.insert({strs[i],len});
            }
        }
        int x=0;
        int maxi=INT_MIN;
        for(auto it: mp){
             x=it.second;
             maxi=max(maxi,x);
        }
        return maxi;
    }
};