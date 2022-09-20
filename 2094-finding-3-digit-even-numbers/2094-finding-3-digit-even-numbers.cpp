class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
         int n=digits.size();
        set<int> st;
        for(int i=0;i<n-2;++i){
            for(int j=i+1;j<n-1;++j){
                for(int k=j+1;k<n;++k){
                    int a=digits[i]*100 + digits[j]*10 + digits[k];
                    int b=digits[i]*100 + digits[k]*10 + digits[j];
                    int c=digits[j]*100 + digits[i]*10 + digits[k];
                    int d=digits[j]*100 + digits[k]*10 + digits[i];
                    int e=digits[k]*100 + digits[i]*10 + digits[j];
                    int f=digits[k]*100 + digits[j]*10 + digits[i];
                    if(a%2==0 && a>99) st.insert(a);
                    if(b%2==0 && b>99) st.insert(b);
                    if(c%2==0 && c>99) st.insert(c);
                    if(d%2==0 && d>99) st.insert(d);
                    if(e%2==0 && e>99) st.insert(e);
                    if(f%2==0 && f>99) st.insert(f);
                }
            }
        }
        vector<int>ans;
        for(auto & i : st) ans.push_back(i);
        return ans;
    }
};