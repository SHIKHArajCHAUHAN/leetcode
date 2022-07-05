class Solution {
public:
    int firstUniqChar(string s) {
          queue<char>q;
        int n=s.size();
        map<char,int>m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(m[s[i]]==1) 
                return i;
            
        }
        return -1;
      /*  for(int i=0;i<n;i++)
        {
            q.push(i);
        }
        int i=q.front()+1;
    while(s[q.front()]!=s[i]){
        i++;
        return q.front();
    }
        
        return -1;*/
    }
};