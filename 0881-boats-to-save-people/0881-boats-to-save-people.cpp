class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
      sort(people.begin(),people.end());
        int n = people.size();
        int end = n-1;
        int st = 0;
        int ans = 0;
        
        while(st<=end){
            if(st==end){
                ans++;
                break;
            }
            if(people[st]+people[end]<=limit){
                ans++;
                st++;
                end--;
            }
            else{
                end--;
                ans++;
            }
        }
        
        return ans;   
    }
};