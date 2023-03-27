class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
            vector<int> Qfreq(queries.size(), 1);
        vector<int> Wfreq(words.size(), 1);

        for(int i=0; i<queries.size(); i++)
        {
            sort(queries[i].begin(), queries[i].end());
            for(int j=1; j<queries[i].length(); j++)
            {
                if(queries[i][j]==queries[i][j-1])
                Qfreq[i]++;

                else
                break;
            }
        }

         for(int i=0; i<words.size(); i++)
        {
            sort(words[i].begin(), words[i].end());
            for(int j=1; j<words[i].length(); j++)
            {
                if(words[i][j]==words[i][j-1])
                Wfreq[i]++;

                else
                break;
            }
        }

        vector<int> ans(queries.size(), 0);

        for(int i=0; i<Qfreq.size(); i++)
        {
            for(int j=0; j<Wfreq.size(); j++)
            {
                if(Qfreq[i]<Wfreq[j])
                ans[i]++;
            }
        }
        return ans;
    }
};