class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      int n1=word1.size();
        int n2=word2.size();
        int i=0,j=0;
        string str;
        while(i<n1&& j<n2)
        {
             str+=word1[i];
            str+=word2[j];
            i++;j++;
        }
        while(i<n1)
        {
            str+=word1[i++];
        }
          while(j<n2)
        {
            str+=word2[j++];
        }
    return str;
    }
};