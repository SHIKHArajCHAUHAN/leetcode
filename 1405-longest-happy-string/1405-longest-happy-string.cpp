class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
      string str="";
       priority_queue<pair<int, char>> pq;
        
        if(a) pq.push({a,'a'});
        if(b) pq.push({b,'b'});
        if(c) pq.push({c,'c'});
        string ans="";
        char prev1 ='*';
        char prev2 ='*';
        
        while(!pq.empty()) {
                auto [cnt1, ch1] = pq.top();
                pq.pop();    
            if(ch1 == prev1 && ch1 == prev2)  
            {
                if(pq.empty()) return ans;
                auto [cnt2 , ch2] = pq.top();
                pq.pop();
                ans += ch2;
                prev1 = prev2;
                prev2 = ch2;
                pq.push({cnt1,ch1});
                if(--cnt2>0) 
                    pq.push({cnt2,ch2});
            }
            else {
                prev1 = prev2;
                prev2 = ch1;
                ans += ch1;
                if(--cnt1>0) 
                     pq.push({cnt1,ch1});                
            }
        }
        return ans;  
    }
};