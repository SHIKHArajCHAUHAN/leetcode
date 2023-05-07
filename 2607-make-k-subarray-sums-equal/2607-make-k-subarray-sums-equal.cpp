class Solution {
public:
       long long fn(vector <int> &temp){

        int n = temp.size();

        sort(temp.begin(),temp.end());
        long long ans = 0;
        long long ans1 = 0 , ans2 = 0;
        if(n%2 == 1){

            int mid = n/2;

            for(int &val : temp){

                ans += abs(val-temp[mid]);

            }
            
        }
        else{

            int mid1 = n/2;
            int mid2 = n/2-1;
            for(auto &val : temp){

                ans1 += abs(val-temp[mid1]);
                ans2 += abs(val-temp[mid2]);

            }

            ans = min(ans1,ans2);

        }

        return ans;

    }
    long long makeSubKSumEqual(vector<int>& arr, int k) {
        int n=arr.size();
        long long ans=0;
       vector<int>mark(n,0);
        for(int i=0;i<n;i++)
        {
            if(mark[i]==1) continue;
            vector<int>temp;
            while(mark[i]!=1)
            {
                mark[i]=1;
                temp.push_back(arr[i]);
                i=(i+k)%n;
            }
            long long opr = fn(temp);

            ans += opr; 
        }
        return ans;
    }
};