class Solution {
public:
    int compress(vector<char>& chars) {
      int j=0;
        int i=0;
        int n=chars.size();
        for(int i=0;i<n;i++)
        {
            char cur=chars[i];
            int cnt=1;
            while(i+1<n&&chars[i]==chars[i+1])
            {
                cnt++;
                i++;
            }
            if(cnt>1)
            {
                chars[j++]=cur;
                if(cnt < 10)
                    chars[j++] = cnt + '0';
                else {
                    vector<char> tmp;
                    while(cnt){
                        tmp.push_back(cnt%10 + '0');
                        cnt /= 10;
                    }
                    reverse(tmp.begin(), tmp.end());
                    for(auto x:tmp){
                        chars[j++] = x;
                    }
                }
            }
            else if(cnt==1)
            {
                chars[j++]=cur;
            }
        }
        chars.resize(j);
        return j;
    }
};