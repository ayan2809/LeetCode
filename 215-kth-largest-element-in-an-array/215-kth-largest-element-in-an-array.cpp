class Solution {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int size;
    void KthLargest(int k, vector<int>& nums) {
        size=k;
        for(auto it: nums)
        {
            pq.push(it);
            if(pq.size()>size)
                pq.pop();
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        KthLargest(k, nums);
        return pq.top();
    }
};