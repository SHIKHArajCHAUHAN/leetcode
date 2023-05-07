class FrequencyTracker {
unordered_map<int,int>mp;
vector<int>sizes;
public:
    FrequencyTracker() {
        sizes.resize(100001,0);
    }
    
    void add(int number) {
        if(mp[number]){
            sizes[mp[number]]--;
        }
        mp[number]++;
        sizes[mp[number]]++;
        
    }
    
    void deleteOne(int number) {
        if(mp.count(number)){
            int freq=mp[number];
            sizes[freq]--;
            mp[number]--;
            
            sizes[mp[number]]++;
            if(!mp[number]){
                mp.erase(number);
                sizes[0]=0;
            }
        }
    }
    
    bool hasFrequency(int frequency) {
        return sizes[frequency];
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */