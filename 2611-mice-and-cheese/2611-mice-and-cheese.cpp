class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        // sort(reward1.begin(),reward1.end(),greater());
        //  sort(reward2.begin(),reward2.end(),greater());
//         priority_queue<pair<int,int>>pq;
//         for(int i=0;i<reward1.size();i++)
//         {
//             pq.push({reward1[i],i});
//             reward1[i]=0;
//         }
//         int n=reward1.size();
//         if(pq.size()<k) return -1;
//         int sum=0;
//         while(k--)
//         {
//            auto x=pq.top() ;
//             sum+=x.first;
//             reward1[x.second]=1;
//             pq.pop();
//         }
//         for(int i=0;i<reward2.size();i++)
//         {
//             if(reward1[i]!=1)
//             {
//                 sum+=reward2[i];
//             }
           
//         }
//         return sum;
        int ans = accumulate(reward2.begin(), reward2.end(), 0);
        int n = reward1.size();
        vector<int> v(n);
        for(int i = 0; i < n; ++i){
            v[i] = reward1[i] - reward2[i]; 
        }
        sort(v.begin(), v.end());
        for(int i = n - 1; i > n - k - 1; --i){
            ans += v[i];
        }
        return ans;
    }
};