class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
      stack<int>s;
        queue<int>q;
        for(auto i:students) 
            q.push(i);

        reverse(sandwiches.begin(),sandwiches.end());
        for(auto i:sandwiches) 
            s.push(i);
        int count=0;
        while(!s.empty())
        {
            if(s.top()==q.front())
            {
                s.pop();
                q.pop();
            }
            else{
                q.push(q.front());
                q.pop();
            }
            count++;
            if(count>1000)
            break;
            
        }
        return q.size();
        

       /* for(int i=0;i<sandwiches.size();i++)
        {
            s.push(sandwiches[i]);
            for(int j=0;j<students.size();j++)
            {
                if(s.top()==students[j])
                {
                    s.pop();
                    x++;
                } 
            }
        }
        return x;*/
        
    }
};