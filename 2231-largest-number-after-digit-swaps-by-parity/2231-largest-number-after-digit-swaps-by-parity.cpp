class Solution {
public:
    int largestInteger(int num) {
     priority_queue<char>pq1;
    priority_queue<char>pq2;
      string str = to_string(num);
        int n=str.length();
      for(int i=0;i<n;i++){
          if((str[i]-'0') % 2==0)
              pq1.push(str[i]);
          else
              pq2.push(str[i]);
      }   
        for(int i=0;i<n;i++){
            if((str[i]-'0') % 2 == 0)
            {
                str[i] = pq1.top();
                pq1.pop();
            }
            else{
                str[i] = pq2.top();
                 pq2.pop();                
         }
        }
        return stoll(str);
        
    }
};