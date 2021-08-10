struct compare {
    bool operator()(pair<char, int> p1, pair<char, int> p2)
    {
        if (p1.second == p2.second)
            return p1.first < p2.first;
 
        return p1.second < p2.second;
    }
};
class Solution {
public:
    string frequencySort(string s) {
        map <char, int> umap;
        for(int i=0;i<s.length();i++)
        {
            umap[s[i]]+=1;
        }
        string out="";
        priority_queue<pair<char, int>, vector<pair<char, int> >,
                compare> pq(umap.begin(), umap.end());
        
        while(!pq.empty())
        {
            for(int i=0;i<pq.top().second;i++)
            {
                out+=pq.top().first;
            }
            pq.pop();
        }
        return out;
    }
};