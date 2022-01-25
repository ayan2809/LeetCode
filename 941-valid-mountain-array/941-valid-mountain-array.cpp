class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<=1)
            return false;
        int maxi=*max_element(arr.begin(),arr.end());
        int i=1;
        while(arr[i]!=maxi)
        {
            cout<<arr[i]<<" "<<arr[i-1]<<endl;
            if(arr[i]<=arr[i-1])
            {
                
                return false;
            }
            i++;
        }
        i= find(arr.begin(), arr.end(), maxi)-arr.begin();
        if(i==arr.size()-1)
            return false;
        cout<<i<<endl;
        while(i<arr.size()-1)
        {
            if(arr[i]<=arr[i+1])
            {
                return false;
            }
            i++;
        }
        return true;
    }
};