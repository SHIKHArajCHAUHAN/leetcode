class Solution {
public:
    double trimMean(vector<int>& arr) {
         const auto size = arr.size();
        sort(arr.begin(),arr.end());
        double sum = 0;
        for (auto i = size / 20; i < size - size / 20; ++i) {
            sum += arr[i];
        }
        return sum / (size - size / 10); 
    }
};