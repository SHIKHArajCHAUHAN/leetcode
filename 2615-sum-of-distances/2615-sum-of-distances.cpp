class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
//         vector<long long>v;
//         long n=nums.size();
//         unordered_map<int,vector<int>>mp;
//         for(long i=0;i<n;i++)
//         {
//             mp[nums[i]].push_back(i);
//         }
//         for(long i=0;i<n;i++)
            
            
//         {
//             long long sum=0;
//             auto v1=mp[nums[i]];
//             for(int j=0;j<v1.size();j++)
//             {
//                 if(i!=v1[j]) sum+=abs(i-v1[j]);
//             }
//             v.push_back(sum);
//         }
//         mp.clear();
//         return v;
        unordered_map<int, pair<long long, int>> num_info;
        int n = nums.size();
        vector<long long> arr(n, 0);

        for (int i = 0; i < n; ++i) {
            if (num_info.find(nums[i]) != num_info.end()) {
                long long sum_of_indices = num_info[nums[i]].first;
                long long count = num_info[nums[i]].second;
                long long distance = i * count - sum_of_indices;
                arr[i] = distance;
                num_info[nums[i]].first += i;
                num_info[nums[i]].second += 1;
            } else {
                num_info[nums[i]] = {i, 1};
            }
        }

        num_info.clear();

        for (int i = n - 1; i >= 0; --i) {
            if (num_info.find(nums[i]) != num_info.end()) {
                long long sum_of_indices = num_info[nums[i]].first;
                long long count = num_info[nums[i]].second;
                long long distance = sum_of_indices - i * count;
                arr[i] += distance;
                num_info[nums[i]].first += i;
                num_info[nums[i]].second += 1;
            } else {
                num_info[nums[i]] = {i, 1};
            }
        }

        return arr;
    }
};