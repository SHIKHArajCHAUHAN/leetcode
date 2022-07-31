class Solution {
public:
    int maximum69Number (int num) {
         int ans=0;
        vector<char>v;
        while(num!=0)
        {
            int r=num%10;
            v.push_back(r);
            num=num/10;
        }reverse(v.begin(),v.end());
       for(int i=0;i<v.size();i++)
       {
           if(v[i]==6) 
           {   v[i]=9;
            break;}
           
       }
        int n=v.size();
        for(int i=0;i<v.size();i++)
        {  ans+=v[i]*pow(10,n-i-1) ;
            
    }
        
    return ans;
    }
};