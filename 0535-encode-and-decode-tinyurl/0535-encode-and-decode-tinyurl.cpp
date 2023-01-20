class Solution {
public:
    map<string,string>mp;
    string st="123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
string fn()
{
    string k;
    for(int i=0;i<7;i++)
    {
        k+=(st[rand()%62]);
    }
    return k;
}
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
            if(mp.find(longUrl)!= mp.end()) {
             return "https://"+longUrl.substr(longUrl.find_last_of("-")+1)+".com/"+mp[longUrl];
        }
        mp[longUrl]=fn();
        return "https://"+longUrl.substr(longUrl.find_last_of("-")+1)+".com/"+mp[longUrl];
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
      for(auto i:mp)
      {
          if(i.second==shortUrl.substr(shortUrl.find_last_of("/")+1)) return i.first;
      }
        return "null";
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));