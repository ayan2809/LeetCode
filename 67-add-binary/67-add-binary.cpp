class Solution {
public:
    string decToBinary(int n)
    {
        int binaryNum[32];

     
        int i = 0;
        while (n > 0) {

            
            binaryNum[i] = n % 2;
            n = n / 2;
            i++;
        }

            string out;
        for (int j = i - 1; j >= 0; j--)
            out+=to_string(binaryNum[j]);
            
        return out;
    }
    string addBinary(string a, string b) {
        string result = ""; 
    int s = 0;          
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || s == 1)
    {
        
        s += ((i >= 0)? a[i] - '0': 0);
        s += ((j >= 0)? b[j] - '0': 0);
 
        
        result = char(s % 2 + '0') + result;
 
       
        s /= 2;
        i--; j--;
    }
    return result;

    }
};