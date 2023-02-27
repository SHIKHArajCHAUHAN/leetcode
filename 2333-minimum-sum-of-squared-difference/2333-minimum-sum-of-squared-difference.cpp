class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        ///humlog heap lga k kr skte h....diff ko heap m daall k...........greater wale se minus  krenge

        int n=nums1.size();
        int N=1e5;
        vector<int>cnt(N+1,0);
        for(int i=0;i<n;i++)
        {
            cnt[abs(nums1[i]-nums2[i])]++;
        }
    int k = k1 + k2;
        for(int diff=N;diff>0;diff--)
        {
            if(k>=cnt[diff])
            {
                cnt[diff-1]+=cnt[diff];
                k-=cnt[diff];
                cnt[diff]=0;
            }
            else
            {
                cnt[diff-1]+=k;
                cnt[diff]-=k;
                k=0;
                break;
            }
        }
        long long ans=0;
        for(long long j=1;j<=N;j++)
        {
            if(cnt[j]>0)ans+=j*j*cnt[j];
        }
        return ans;
    }
};