class Solution {
public:
     vector<bool> sieveOfEratosthenes(int n) {
    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false;

    int p = 2;
    while (p * p <= n) {
        if (primes[p]) {
            int i = p * p;
            while (i <= n) {
                primes[i] = false;
                i += p;
            }
        }
        p++;
    }

    return primes;
}

vector<vector<int>> findPrimePairs(int n) {
    vector<bool> primes = sieveOfEratosthenes(n);
    vector<vector<int>> primePairs;

    int num = 2;
    while (num <= n / 2) {
        int comp = n - num;
        if (primes[num] && primes[comp]) {
            vector<int> pair = {num, comp};
            primePairs.push_back(pair);
        }
        num++;
    }

    return primePairs;
}
};
//     vector<bool>prime;
//     void SieveOfEratosthenes(int n)
// {
  
//     for (int p = 2; p * p <= n; p++) {
    
//         if (prime[p] == true) {
          
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
//     }
//     vector<vector<int>> findPrimePairs(int n) {
//        vector<vector<int>>v;
//        for(int i=1;i<n+1;i++)
//        {
         
//            prime.push_back(true);
//        }
//         set<vector<int>>s;
//         SieveOfEratosthenes(n);
//           for (int p =2; p <= n; p++)
//         if (prime[p]&&prime[n-p])
//         {
//             if(n-p!=0&&n-p!=1)
//             s.insert({min(p,n-p),max(p,n-p)});
//         }
//         for(auto i:s)
//         {
//             v.push_back(i);
//         }
           
// return v;
//     }
// };