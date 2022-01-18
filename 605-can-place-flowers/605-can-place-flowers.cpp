class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int siz=flowerbed.size();
        int count=0;
        int i=2;
        if(siz==1 && flowerbed[0]==0)
            count++;
        else
            {
                if(flowerbed[0]==0 && flowerbed[1]==0)
                       count++;
                
                  
                    while(i<siz)
                       {
                           if(i==siz-1)
                              {
                                 if(flowerbed[siz-1]==0 && flowerbed[siz-2]==0)
                                   count++; 
                               break;
                              }
                           else
                              {
                                 if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0)
                                 {
                                    count++;
                                    i=i+2;
                                 }
                                  else
                                    i++;
                              }  
}
            }                      
           // cout<<count;
        
        return (count>=n);
    }
      //  cout<<count<<endl;
    // }
};