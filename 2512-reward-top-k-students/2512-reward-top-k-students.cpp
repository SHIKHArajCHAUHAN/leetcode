class Solution {
public:
  static  bool fn(const pair<int,int>&a,const pair<int,int>&b)
    {
        if(a.first==b.first) return a.second<b.second;
        else return a.first>b.first;
    }
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
    /*  map<string,int>mp1;
        map<string,int>mp2;
        vector<pair<int,int>>v;
        for(auto i:positive_feedback)mp1[i]++;
        for(auto i:negative_feedback)mp2[i]++;
        for(int i=0;i<report.size();i++)
        {
            string x=report[i];
            string s;
            int score=0;
            for(int j=0;j<x.size();j++)
            {
                if(x[j]==' ')
                {
                   if(mp1.find(s)!=mp1.end())score+=3;
                    if(mp2.find(s)!=mp2.end()) score-=1;
                    s="";
                }
                else 
                {
                    s+=x[i];
                }
            }
                 if(mp1.find(s)!=mp1.end())score+=3;
                    if(mp2.find(s)!=mp2.end()) score-=1;
                v.push_back({score, student_id[i]});
        }
        sort(v.begin(),v.end(),fn);
          
        vector<int>ans;
        for(auto i:v)
        {
            if(k>0)
            {ans.push_back(i.second);
             k--;}
                
            else break;
        }
        return ans;*/
         map<string,int>mp1,mp2;
        for(auto x:positive_feedback)mp1[x]++;
        for(auto x:negative_feedback)mp2[x]++;
        int n=student_id.size();
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++){
            string x=report[i];
            string temp;
            int c=0;
            for(int i=0;i<x.size();i++){
                if(x[i]==' '){
                    if(mp1.find(temp)!=mp1.end())c+=3;
                    if(mp2.find(temp)!=mp2.end())c--;
                    temp="";
                }
                else
                temp+=x[i];
            }
            if(mp1.find(temp)!=mp1.end())c+=3;
            if(mp2.find(temp)!=mp2.end())c--;
            vp.push_back({c,student_id[i]});
        }
        sort(vp.begin(),vp.end(),[](pair<int,int>&a,pair<int,int>&b){
            return (a.first==b.first)?a.second<b.second:a.first>b.first;
        });
        vector<int>ans;
        for(auto x:vp){
            if(k>0)
            ans.push_back(x.second),k--;
            else break;
        }
        return ans;
    }
};