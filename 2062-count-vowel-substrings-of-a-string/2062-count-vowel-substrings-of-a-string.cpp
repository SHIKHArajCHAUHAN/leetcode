class Solution {
public:
    int countVowelSubstrings(string word) {
   /*   int i=0;
        int j=0;
        map<int,int>mp;
        while(i<word.size())
        {
            mp[word[i]]++;
            if(mp.size()<)
            
        }*/
        int N = word.size();
        int res = 0 ;
        for( int i = 0 ; i < N ; i++ )
        {
            string p = "aeiou";
            set<char>st(p.begin(),p.end());
            set<char>st2 ;
            for( int j = i ; j < N ; j++ )
            {
                  if(st.count(word[j]) == 0)
                      break ;
                
                  st2.insert(word[j]);
                
                if( st == st2 )
                    res++;
            }
        }
        return res; 

    }
};