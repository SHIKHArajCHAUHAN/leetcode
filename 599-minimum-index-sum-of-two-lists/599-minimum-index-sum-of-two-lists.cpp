class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>s;
      /*  for(int i=0; i<list1.size();i++)
        {
            for(int j=0;j<list2.size();j++)
            {
                if(list1[i]==list2[j])
                s.push_back(list2[j]);   
            }
        }
        return s;*/
          map<string, int > mp;
        int indexSum=INT_MAX;
        for( int i =0;i< list1.size(); i++)
        {
            mp[list1[i]]=i;
        }
        
        for( int i=0;i< list2.size(); i++)
        {
            if(mp.count(list2[i])!=0)
            {
                if(mp[list2[i]]+i<indexSum) {
                    
                    indexSum=mp[list2[i]]+i;
                    s.clear();
                    s.push_back(list2[i]);
                    
                }
                else if( mp[list2[i]]+i==indexSum)
                {
                    s.push_back(list2[i]);
                }
            }
        }
        
        return s;
    }
};