class LUPrefix {
public:
    set<int>st;
    LUPrefix(int n) {
        n++;
        for(int i=1;i<=n;i++)
        {
            st.insert(i);
        }
    }
    void upload(int video) {
        st.erase(video);
    }
    
    int longest() {
        return *st.begin()-1;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */