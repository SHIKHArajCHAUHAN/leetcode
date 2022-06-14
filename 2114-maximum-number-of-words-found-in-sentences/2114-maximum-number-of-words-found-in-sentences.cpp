class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      int maxx=0;
        string ans;
        int n=sentences.size();
        for(int i=0;i<n;i++)
    
         {ans=sentences[i];
          int sum=count(ans.begin(),ans.end(),' ');// learn use of count
               if(sum>maxx)
                   maxx=sum;
            
        }
        return maxx+1;
    }
};