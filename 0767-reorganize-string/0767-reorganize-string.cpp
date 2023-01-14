class Solution {
public:
    string reorganizeString(string s) {
       string str="";
        map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
        }
        while(!pq.empty())
        {
            pair<int,char>cur=pq.top();
            str+=cur.second;
            int x=cur.first;
            x--;
            pq.pop();
            if(pq.empty())
            {
                if(x>0) return "";
                else return str;
            }
            pair<int,char>curr2=pq.top();
            pq.pop();
            int y=curr2.first;
            str+=curr2.second;
            y--;
            if(y>0)
            {
                pq.push({y,curr2.second});
            }
             if(x>0)
            {
                pq.push({x,cur.second});
            }
        }
        return str;
    }
};