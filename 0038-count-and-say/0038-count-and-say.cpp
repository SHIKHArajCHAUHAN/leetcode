class Solution {
public:
    string countAndSay(int n) {
           string ans = "1";
        n--;
        while(n--){
            string curr = "";
            int cnt = 1;
            for(int i = 1; i <= ans.length(); i++){
                if(i == ans.length()){
                    curr += to_string(cnt);
                    curr += ans.back();
                }
                else if(ans[i] == ans[i - 1]){
                    cnt++;
                }
                else{
                    curr += to_string(cnt);
                    curr += ans[i - 1];
                    cnt = 1;
                }
            }
            ans = curr;
        }
        return ans;
    }
};