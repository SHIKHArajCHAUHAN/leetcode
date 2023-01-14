class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
    map<char,int>mp;
        priority_queue<pair<char,int>>pq;
    
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        for(auto i:mp)
        {
            pq.push({i.first,i.second});
        }
        string str="";
        while(!pq.empty())
        {
            pair<char,int>cur=pq.top();
            pq.pop();
            if(cur.second<=repeatLimit){
                for(int i=0;i<cur.second;i++){
                    str+=cur.first;
                }
            }
            else{
                for(int i=0;i<repeatLimit;i++){
                    str+=cur.first;
                }
            
                if(pq.empty())
                    break;
                else{
                    pair<char,int> curr2=pq.top();
                    str+=curr2.first;
                    pq.pop();
                    if(curr2.second>1)
                        pq.push({curr2.first,curr2.second-1});
                     cur.second-=repeatLimit;
                pq.push({cur.first,cur.second});
                }
                }
        }
            return str;
    }
};