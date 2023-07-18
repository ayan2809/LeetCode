class LRUCache {
public:
    list<pair<int, int>> lru;
    unordered_map<int, list<pair<int, int>>::iterator> umap;
    int capacity=0;
    
    LRUCache(int capacity) {
        this->capacity=capacity;
    }
    
    int get(int key) {
        if(umap.find(key)!=umap.end())
        {
            update(key, (*umap[key]).second);
            return (*umap[key]).second;
        }
        return -1;
    }
    void update(int key, int value)
    {
        lru.erase(umap[key]);
        lru.push_front({key, value});
        umap[key]=lru.begin();
    }
    
    void put(int key, int value) 
    {
        if (umap.find(key) != umap.end()) 
            update(key, value);
		else 
        {
			lru.push_front({key, value });
			umap[key] = lru.begin();

			if (umap.size() > capacity) 
            {
				umap.erase(lru.back().first);
				lru.pop_back();
			}
		}
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */