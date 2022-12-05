class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
          int z = count(begin(arr), end(arr), 0), n = arr.size();// zeros cnt kr liya
    for (int i = n - 1, j = n + z; i >= 0; i--) {
        if (arr[i] == 0 && --j < n) arr[j] = arr[i];
        if (--j < n) arr[j] = arr[i] ;
        }
    }
};