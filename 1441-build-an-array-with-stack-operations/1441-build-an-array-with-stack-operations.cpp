class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int cur=0;
        for(int i=1;i<=n;i++)
        {
            if(cur>=target.size())
            {
                break;
            }
           if(target[cur]==i)
           {
               ans.push_back("Push");
               cur++;
           }
            else
            {
             ans.push_back("Push");
            ans.push_back("Pop");
            }
            
        }
        return ans;
            
            
            
            
            
            
            /*int x=target[i+1]-target[i]-1;
         int y=n-target[target.size()]-1;
         int z=target[i]-1;
         while(z!=0)
         {
         if(z==0)
         {
             ans.push_back("push");
         }
         else
         {
             ans.push_back("push");
             ans.push_back("pop");
         }
           z--;  
         }
         ans.push_back("push");
         ans.push_back("push");

            while(x!=0)
            {
                ans.push_back("push");
                ans.push_back("pop");
                x--;
            }
             ans.push_back("push");
             ans.push_back("push");

         while(y!=0)
         {  
             ans.push_back("push");
            ans.push_back("pop");  
             y--;
         }
         ans.push_back("push");
         
        ans.push_back("push");
 
        }
        return ans;*/
        
    }
};