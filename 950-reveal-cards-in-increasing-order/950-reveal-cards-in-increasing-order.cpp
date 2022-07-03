class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
      int n=deck.size();
      //  1 2 3 4 5
        queue<int>q;
        vector<int>ans(n);
        sort(deck.begin(),deck.end());
        for(int i=0;i<n;i++)
        {
           q.push(i); 
        }
        for(int i=0;i<n;i++)
        {
            ans[q.front()]=deck[i];
            
                q.pop();
                q.push(q.front());
                q.pop();
            
        }
        return ans;
        
    }
};