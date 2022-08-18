struct compare {
    bool operator()(pair<int, int> p1, pair<int, int> p2)
    {
        if (p1.second == p2.second)
            return p1.first < p2.first;
 
        return p1.second < p2.second;
    }
};
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int, int> umap;
        int maxi=-1;
        for(auto it: arr)
        {
            umap[it]+=1;
            maxi=max(maxi, umap[it]);
        }
        int target=arr.size();
        int t=target/2;
        map<int, int> umap2;
         priority_queue<pair<int, int>, vector<pair<int, int> >,
                compare> pq(umap.begin(), umap.end());
        int count=0;
        while(!pq.empty()){
        cout << pq.top().first << " ";
        target-=pq.top().second;
        count++;
        if(target<=t)
        {
            break;
        }
        pq.pop();
        }
        return count;
    }
};