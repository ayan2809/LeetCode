class TimeMap {
public:
    unordered_map<string, map<int, string>> umap;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        umap[key].insert({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        auto it= umap[key].upper_bound(timestamp);
        if(it==umap[key].begin())
            return "";
        return prev(it)->second;
    }
};