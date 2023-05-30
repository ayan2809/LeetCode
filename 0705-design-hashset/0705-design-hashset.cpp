class MyHashSet {
public:
    /** Initialize your data structure here. */
    map<int, int> umap;
    MyHashSet() {
        // for (auto it: umap)
        // {
        //     umap[it]=0;
        // }
    }
    
    void add(int key) {
        umap[key]=1;
    }
    
    void remove(int key) {
        umap[key]=0;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        cout<<umap[key]<<endl;
        if(umap[key]!=0)
            return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */