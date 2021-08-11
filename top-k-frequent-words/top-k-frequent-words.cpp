struct compare{
  bool operator()(pair<string, int> p1, pair<string, int> p2)
    {
        if (p1.second == p2.second)
            return p1.first > p2.first;
 
        return p1.second < p2.second;
    } 
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> umap;
        for(auto it: words)
        {
            umap[it]+=1;
        }
        vector<string> out;
         priority_queue<pair<string, int>, vector<pair<string, int> >,
                compare> pq(umap.begin(), umap.end());
        
        for(int i=0;i<k;i++)
        {
            out.push_back(pq.top().first);
            pq.pop();
        }
        //sort(out.begin(),out.end());
        return out;
    }
};