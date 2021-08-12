class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        
         int n=arr.size(),k=0;
         map<int, int> umap;
        vector<int> posi;
        vector<int> nega;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                nega.push_back(arr[i]);
            }
            else if(arr[i]>0)
            {
                posi.push_back(arr[i]);
            }
            else
            {
                k++;
            }
            umap[arr[i]]+=1;
        }
        int count=0;
        sort(nega.begin(), nega.end());
         sort(posi.begin(), posi.end());
        int nsize=nega.size()/2;
        for(int i=nega.size()-1;i>=0;i--)
        {
            //a.push_back(nega[i]);
            int ans2=nega[i];
            int ans1=ans2*2;
            //cout<<ans1<<" "<<ans2<<endl;
            if(umap[ans1]!=0 && umap[ans2]!=0)
            {
                count++;
                umap[ans1]-=1;
                umap[ans2]-=1;
                
            }
        }
        for(int i=0;i<posi.size();i++)
        {
            //a.push_back(posi[i]);
            int ans2=posi[i];
            int ans1=ans2*2;
            cout<<ans1<<" "<<ans2<<endl;
            if(umap[ans1]!=0 && umap[ans2]!=0)
            {
                count++;
                umap[ans1]-=1;
                umap[ans2]-=1;
                
            }
        }
//          sort(arr.begin(), arr.end()); 
//         int count=0;
//         for(int i=0;i<n/2;i++)
//         {
//             cout<<arr[i]<<endl;
//             //int check=2*i+1;
//             int ans2=arr[i];
//             int ans1=ans2*2;
//             cout<<ans1<<" "<<ans2<<endl;
//             if(umap[ans1]!=0 && umap[ans2]!=0)
//             {
//                 count++;
//                 umap[ans1]-=1;
//                 umap[ans2]-=1;
                
//             }
//             //cout<<a[check]<<" "<<2*(a[check-1])<<endl;
//             //if(a[check]==(2*(a[2*i])))
//                 //count++;
//         }
        cout<<endl;
        count+=(int)k/2;
        if(count==n/2)
            return true;
        return false;
        
    }
};