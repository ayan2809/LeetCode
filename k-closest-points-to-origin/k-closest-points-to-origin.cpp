struct compare{
  bool operator()(pair<vector<int>, int> p1, pair<vector<int>, int> p2)
    {
        if (p1.second == p2.second)
            return p1.first < p2.first;
 
        return p1.second > p2.second;
    } 
};
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        map<vector<int>, int> umap;
        vector<vector<int>> out;      

        for(int i=0;i<points.size();i++)
        {
            umap[points[i]]=pow(points[i][0],2)+pow(points[i][1],2);
        }
        priority_queue<pair<vector<int>, int>, vector<pair<vector<int>, int> >,
                compare> pq(umap.begin(), umap.end());
        // for(auto it: umap)
        // {
        //     cout<<it.second<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<k;i++)
        {
            out.push_back(pq.top().first);
            pq.pop();
        }
        return out;
    }
};