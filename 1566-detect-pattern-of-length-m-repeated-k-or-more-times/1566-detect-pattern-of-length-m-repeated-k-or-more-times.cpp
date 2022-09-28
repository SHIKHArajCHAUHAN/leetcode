class Solution {/// if sub arry is repeated then i=i+m //otherwise we can use map;
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
       /* int n = arr.size();
        int len = 0;
        for(int i = 0; i < n - m; i++) {
            if(arr[i] == arr[i + m]) len++;
            else {
                if(len / m >= k-1) return true;
                len = 0;
            }
        }
        if(len / m >= k-1) return true;
        return false;*/
         int cnt=0;
        for(int i=0;i+m<arr.size();i++){
            if(arr[i]==arr[i+m])cnt++;
            else cnt=0;
            if(cnt==(k-1)*m)return true;
        }
        return false;

    }
};