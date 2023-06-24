class Solution {
public:
    int clumsy(int n) {
      int operation=0;
        stack<int> st;
        st.push(n);
        for(int i=n-1;i>=1;i--){
            if(operation==0){
                int x=st.top();
                st.pop();
                st.push(x*i);
            }
        
            else if(operation==1){
                int x=st.top();
                st.pop();
                st.push(x/i);
            }
            else if(operation==2){
                st.push(i);
            }
            else {
                st.push(i*(-1));
            }
            operation=((operation+1)%4);
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
  
    }
};