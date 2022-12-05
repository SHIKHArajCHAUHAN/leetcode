class Solution {
public:
    vector<double> sampleStats(vector<int>& count) {
        int sum=accumulate(count.begin(),count.end(),0);
        bool odd=(sum&1);
        int mid1=-1,mid2=-1;
        int mid=(sum>>1)+(odd?1:0);
        int x=0;
        int mx=0,mn=256,mode,freq=0;
        long mean=0,num=0;
        for(int i=0;i<256;i++){
            if(count[i]==0)continue;
            num+=count[i];
            mean+=((long)i*count[i]);
            mx=max(i,mx);
            mn=min(i,mn);
            if(count[i]>freq){
                freq=count[i];
                mode=i;
            }
            x+=count[i];
            if(x==mid){
                mid1=i;
            }
            else if(x>mid){
                if(mid1==-1)mid1=i;
                if(mid2==-1)mid2=i;
            }
        }
        
        double median;
        if(odd)median=mid1;
        else median=(double)(mid1+mid2)/2.0;
        return {(double)mn,(double)mx,(double)mean/num,median,(double)mode}; 
    }
};