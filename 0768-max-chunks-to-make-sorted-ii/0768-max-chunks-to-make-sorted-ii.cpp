class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
    stack<int>s;
        for(int i=0;i<arr.size();i++)
        {
            int a=arr[i];
            while(!s.empty()&&s.top()>arr[i])
            {
               a=max(a,s.top());
                s.pop();
            }
            s.push(a);
        }
        return s.size();
    }
};