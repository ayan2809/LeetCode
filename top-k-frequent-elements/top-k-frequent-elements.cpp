struct compare{
  bool operator()(pair<int, int> p1, pair<int, int> p2)
    {
        if (p1.second == p2.second)
            return p1.first < p2.first;
 
        return p1.second < p2.second;
    } 
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> umap;
        for(auto it: nums)
        {
            umap[it]+=1;
        }
        vector<int> out;
         priority_queue<pair<int, int>, vector<pair<int, int> >,
                compare> pq(umap.begin(), umap.end());
        
        for(int i=0;i<k;i++)
        {
            out.push_back(pq.top().first);
            pq.pop();
        }
        return out;
    }
};