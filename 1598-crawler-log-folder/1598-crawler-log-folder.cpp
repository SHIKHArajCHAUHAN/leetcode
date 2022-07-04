class Solution {
public:
    int minOperations(vector<string>& logs) {
       stack<string> s;
           for(int i=0;i<logs.size();i++)
           {
               if(logs[i]=="../"){
               if(s.empty()) 
                   continue;
               else
                   s.pop();}
               
               else if(logs[i]!="./")
               {
                   s.push(logs[i]);
               }
           }
        return s.size();
    }
};