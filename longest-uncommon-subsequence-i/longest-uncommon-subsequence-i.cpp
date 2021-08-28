class Solution {
public:
    int findLUSlength(string a, string b) {
//         int j=b.length()-1;
//         // int n=;
//         for (int i=a.length()-1;i>=0;i--)
//         {
//             if(j<0)
//                 break;
//             if(a[i]==b[j])
//             {
//                 j--;
//             }
//         }
//         if(j<0)
//             return -1;
        
//         return j+1;
        if(a==b)
        {
            return -1;
        }
        return max(a.length(), b.length());
    }
};