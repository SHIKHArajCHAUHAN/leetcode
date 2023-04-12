class Solution {
public:
    string simplifyPath(string path) {
//      stack<char>st;
//         for(int i=0;i<path.size();i++)
//         {
//             if(st.size()==0) st.push(path[i]);
//             else if(st.size()>0&&st.top()=='/'&&path[i]=='/')
//             {
                
//             }
//             else if(st.size()>0&&st.top()=='/'&&path[i]=='.')
//             {
                
//             }
//             else st.push(path[i]);
//         }
//         if(st.size()!=1&&st.top()=='/') st.pop();
//         string str="";
//         while(!st.empty())
//         {
//             auto ch=st.top();
//             st.pop();
//             str.push_back(ch);
//         }
//         reverse(str.begin(),str.end());
//         return str;
        stack<string>st;int n=path.size();
        for(int i=0;i<n;i++)
        {
            if(path[i]=='/')continue;
            string str;
            while(i<n&& path[i]!='/')
            {
                str+=path[i++];
            }
            i--;
            if(str==".") continue;
           else if( str=="..")
            {
               if(st.size()>0)
                st.pop();
            }
            else st.push(str);
            
        }
        string ans="";
        while(!st.empty())
        {
            ans="/"+st.top()+ans;
            st.pop();
        }
        if(ans=="") return "/";
            else
      return ans;
        
    }
};