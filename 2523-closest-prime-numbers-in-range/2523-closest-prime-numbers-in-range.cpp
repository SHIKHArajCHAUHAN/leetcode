class Solution {
public:
    int N=1000001;
   // int sdf[1000001];
//     void fn(int n)
//     {

//         for(int i=2;i<N;i++ )
//         {
//             sdf[i]=1;
//         }
//         for(int i=2;i*i<=n;i++)
//         {
//             if(sdf[i]==1){
//             for(int j=i*i;j<=n;j+=i)
//             {
//                sdf[j]=0; 
//             }
//             }
//         }
//     }
    vector<int> closestPrimes(int left, int right) {
       //  vector<int>v;
       //  fn(right);
       //  for(int i=left;i<=right;i++)
       //  {
       //      if(sdf[i]==1)v.push_back(i);
       //  }
       // if(v.size()<2) return {-1,-1};
        // int x=v[0];
        // int y=v[1];
        // int minn=INT_MAX;
        // for(int i=0;i<v.size()-1;i++)
        // {
        //     for(int j=i+1;j<v.size();j++)
        //     {
        //         if((v[j]-v[i])<minn)
        //         {
        //             minn=(v[j]-v[i]);
        //             x=v[i];
        //             y=v[j];
        //         }
        //     }
        // }
        // return {x,y};
     int a = -1, b=-1; 
        bool seen[1000001]={};
        vector<int> res(2, -1); 
        seen[1] = seen[0]= true; 
        
        for(int i=2; i<=right; i++)
            if(!seen[i])
                for(int j=2*i; j<=right; j+=i)
                    seen[j] = true;
            
        for(int i=left; i<=right; i++){
            if(!seen[i]){
                b = a;
                a = i;
                if(res[1]==-1 || (a-b)<(res[1]-res[0])){
                    res[0] = b;
                    res[1] = a;
                    if(res[1]-res[0]<3)
                        break;
                }
            }
        }
        
        if(res[0]==-1){
            res[1]=-1;

            return res;
        }        
        return res;
    }
};